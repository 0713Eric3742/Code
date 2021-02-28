#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, k;
	int n[200005] = {}, dp[200005] = {};
	cin >> a >> k;
	for (int i = 0; i < a; i++)
	{
		cin >> n[i];
		dp[i] = INT_MAX;
	}
	dp[0] = 0;
	dp[1] = abs(n[1] - n[0]);
	for (int i = 2; i < a; i++)
	{
		for (int j = 1; j <= k && i - j >= 0; j++)
		{
			dp[i] = min((dp[i - j] + abs(n[i - j] - n[i])), dp[i]);
		}
	}
	cout << dp[a - 1] << endl;
	return 0;
}