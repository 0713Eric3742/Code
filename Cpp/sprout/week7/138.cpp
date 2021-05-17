#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
#define M 1000007
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int dp[100010] = {}, s = 0;
	dp[0] = 1;
	dp[2] = 3;
	for (int i = 4; i < 100003; i += 2)
	{
		s += dp[i - 4] * 2;
		s %= M;
		dp[i] = (dp[i - 2] * 3 + s + M) % M;
	}
	int a, t;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		cout << (dp[t] + M) % M << endl;
	}
	return 0;
}