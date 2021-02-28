#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	int n[200005] = {}, dp[200005] = {};
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> n[i];
	}
	dp[0] = 0;
	dp[1] = abs(n[1] - n[0]);
	for (int i = 2; i < a; i++)
	{
		dp[i] = min(dp[i - 2] + abs(n[i - 2] - n[i]), dp[i - 1] + abs(n[i - 1] - n[i]));
	}
	cout << dp[a - 1] << endl;
	return 0;
}