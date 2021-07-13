#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
int32_t main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, t1, t2, t3;
	map<int, int> m;
	while (cin >> a)
	{
		m.clear();
		for (int i = 0; i < a; i++)
		{
			cin >> t1 >> t2 >> t3;
			m.emplace(make_pair(t1, t3));
			m.emplace(make_pair(t2 + 1, -1 * t3));
		}
		int t = 0;
		int ans = 0;
		for (auto i = m.begin(); i != m.end(); i++)
		{
			t += i->second;
			ans = max(ans, t);
		}
		cout << ans << endl;
	}
	return 0;
}