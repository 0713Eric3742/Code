/*#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
#define M 1000007
int dp[3][3][100005] = {};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	dp[0][0][1] = 1;
	dp[1][1][1] = 1;
	dp[2][2][1] = 1; //0-r,1-b,2-g
	for (int i = 2; i < 100005; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			dp[j][0][i] = (dp[j][0][i - 1] + dp[j][1][i - 1] + dp[j][2][i - 1] + 3 * M) % M;
			dp[j][1][i] = (dp[j][0][i - 1] + dp[j][1][i - 1] + 3 * M) % M;
			dp[j][2][i] = (dp[j][0][i - 1] + dp[j][2][i - 1] + 3 * M) % M;
		}
	}
	int a, t;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		cout << (dp[0][0][t] + dp[1][2][t] + dp[2][1][t] + dp[0][1][t] + dp[0][2][t] + dp[1][0][t] + dp[1][1][t] + dp[2][0][t] + dp[2][2][t] + 7 * M) % M << endl;
	}

	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int ans[3][100005][3]={};
#define M 1000007
//#define int long long
int32_t main()
{
	int a, t;
	for (int i = 0; i < 3; i++)
	{
		ans[0][1][i] = 1;
	}
	ans[1][1][1] = 1;
	ans[2][1][2] = 1;
	for (int i = 2; i < 100003; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ans[j][i][0] = (ans[j][i - 1][0] % M + ans[j][i - 1][1] % M + ans[j][i - 1][2] % M) % M;
			ans[j][i][1] = (ans[j][i - 1][0] % M + ans[j][i - 1][1] % M) % M;
			ans[j][i][2] = (ans[j][i - 1][0] % M + ans[j][i - 1][2] % M) % M;
		}
	}
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		cout << (ans[0][t][0] + ans[0][t][1] + ans[0][t][2] - ans[1][t][2] - ans[2][t][1] + 3 * M) % M << endl;
	}
	return 0;
}