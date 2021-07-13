#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
int32_t main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	int num[200005] = {};
	while (cin >> a)
	{
		for (int i = 0; i < a; i++)
		{
			cin >> num[i];
		}
		sort(num, num + a);
		int ans = 0;
		for (int i = 1; i < a; i++)
		{
			num[i] = num[i] + num[i - 1];
		}
		for (int i = 0; i < a; i++)
		{
			ans += num[i];
		}
		cout << ans << endl;
	}
	return 0;
}