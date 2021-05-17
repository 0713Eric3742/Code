#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> num;
	int a, t, ans = 0, t1, t2;
	while (cin >> a && a != 0)
	{
		while (!num.empty())
			num.pop();
		ans = 0;
		for (int i = 0; i < a; i++)
		{
			cin >> t;
			num.push(t);
		}
		while (num.size() != 1)
		{
			t1 = num.top();
			num.pop();
			t2 = num.top();
			num.pop();
			ans += t1 + t2;
			num.push(t1 + t2);
			//cout << t1 << ' ' << t2 << endl;
		}
		cout << ans << endl;
	}
	return 0;
}