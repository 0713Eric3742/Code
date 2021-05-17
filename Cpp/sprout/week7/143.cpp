//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
int dp[105][105], n, w[105], s[105];
void solve_subtask()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> w[i];
		s[i] = s[i - 1] + w[i];
	}
	for (int len = 1; len <= n; len++)
	{
		for (int l = 1; l + len - 1 <= n; l++)
		{
			int r = l + len - 1;
			if (len == 1)
				dp[l][r] = 0;
			else
			{
				dp[l][r] = INT_MAX;
				for (int k = l; k < r; k++)
					dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r] + s[r] - s[l - 1]);
			}
		}
	}
	cout << dp[1][n] << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt = 1;
#ifdef MANY_SUBTASK
	cin >> cnt;
#endif
	while (cnt--)
	{
		solve_subtask();
	}
	return 0;
}