#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int a, n[100005][3] = {}, dp[100005][3] = {};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> n[i][j];
		}
	}
	dp[0][0] = n[0][0];
	dp[0][1] = n[0][1];
	dp[0][2] = n[0][2];
	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (j != k)
					dp[i][j] = max(n[i][j] + dp[i - 1][k], dp[i][j]);
			}
		}
	}
	int ans=0;
	for (int i = 0; i < 3; i++)
	{
		ans = max(ans, dp[a - 1][i]);
	}
	cout << ans << endl;
	return 0;
}