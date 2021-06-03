#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
int dp[500005] = {};
int v[500005] = {};
int s[500005] = {};
int32_t main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	for (int i = 0; i < 500003; i++)
	{
		dp[i] = LONG_LONG_MIN + 10000;
	}
	int a, b, t;
	cin >> a >> b;
	dp[0] = 0;
	v[0] = 0;
	s[0] = 0; 
	for (int i = 1; i <= a; i++)
	{
		cin >> t;
		s[i] = s[i - 1] + t;
		cout << s[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if ((i - j >= 0) && (dp[i - j] + (v[0] + 1) * (s[i] - s[i - j - 1])) > dp[i])
			{
				v[i] = v[i - j] + 1;
				dp[i] = dp[i - j] + v[i] * (s[i] - s[i - j - 1]);
				cout << i << ' ' << (s[i] - s[i - j - 1]) << endl;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << dp[i] << ' ';
	}
	cout << dp[a - 1] << endl;
	return 0;
}