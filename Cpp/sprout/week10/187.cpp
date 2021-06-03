//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
int dp[70000][20] = {};
int edges[20][20] = {};
void solve_subtask()
{
	int a, t;
	for (int i = 0; i < 70000; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			dp[i][j] = INT_MAX;
		}
	}
	//-------
	cin >> a;
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - i - 1; j++)
		{
			cin >> edges[i][i + j + 1];
			edges[i + j + 1][i] = edges[i][i + j + 1];
		}
	}
	dp[0][0] = 0;
	/*for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << edges[i][j] << ' ';
		}
		cout << endl;
	}*/
	for (int i = 0; i < 1 << a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < a; k++)
			{
				if ((i >> k) & 1 == 1 && i - (1 << k) >= 0)
					dp[i][k] = min(dp[i][k], dp[i - (1 << k)][j] + edges[k][j]);
			}
		}
	}
	cout << dp[(1 << a) - 1][0] << endl;
	/*for (int i = 0; i < 1 << a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << i << ' ' << j << ' ' << dp[i][j] << endl;
		}
	}*/
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