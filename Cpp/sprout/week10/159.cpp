//codeforces template
#define MANY_SUBTASK
//#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
//#define endl '\n'
//#define int long long
using namespace std;
//start here
void solve_subtask()
{
	int n, m, c, k;
	vector<int> v;
	v.clear();
	bool dp[20005] = {};
	for (int i = 0; i < 20001; i++)
	{
		dp[i] = false;
	}
	dp[0] = true;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> c >> k;
		int t = 1;
		while (t < k)
		{
			k -= t;
			v.emplace_back(c * t);
			t *= 2;
		}
		if (k > 0)
		{
			v.emplace_back(k * c);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = m; j >= v[i]; j--)
		{
			dp[j] = dp[j] || dp[j - v[i]];
		}
	}
	if (dp[m])
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;
	return;
}
int32_t main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
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