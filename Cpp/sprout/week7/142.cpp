//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
void solve_subtask()
{
	int a, num[100005] = {}, dp[100005] = {}, ans = 0, k;
	cin >> a >> k;
	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < k; i++)
	{
		dp[i] = num[i];
		ans = max(ans, dp[i]);
	}
	dp[k] = num[k] + dp[0];
	ans = max(ans, dp[k]);
	for (int i = k + 1; i < a; i++)
	{
		dp[i] = num[i];
		for (int j = 0; j < k; j++)
		{
			dp[i] = max(dp[i], dp[i - k - j] + num[i]);
		}
		ans = max(ans, dp[i]);
	}
	/*for (int i = 0; i < a; i++)
	{
		cout << dp[i] << ' ';
	}
	*/
	cout << ans << endl;
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