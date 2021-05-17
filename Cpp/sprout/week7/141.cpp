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
	int a, num[100005] = {}, dp[100005] = {}, ans = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}
	dp[0] = num[0];
	dp[1] = num[1];
	dp[2] = num[2] + num[0];
	for (int i = 3; i < a; i++)
	{
		dp[i] = max(dp[i - 3], dp[i - 2]) + num[i];
	}
	for (int i = a - 1, cnt = 0; i >= 0 && cnt < 3; i--, cnt++)
	{
		ans = max(ans, dp[i]);
	}
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