#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
struct node
{
	int c[3];
	int v[3];
} n[105];
vector<pair<int, int>> edge[105];
int dp[105][105] = {};
bool vis[105] = {};
void fs(int nd)
{
	vis[nd] = true;
	int t = 0;
	for (int i = 0; i < edge[nd].size(); i++)
	{
		if (vis[edge[nd][i].first] == false)
		{
			n[nd].c[t] = edge[nd][i].first;
			n[nd].v[t] = edge[nd][i].second;
			fs(edge[nd][i].first);
			t++;
		}
	}
	return;
}
void dfs(int nd, int k, int val)
{
	for (int i = 0; i <= k; i++)
	{
		if (n[nd].c[0] != 0)
			dfs(n[nd].c[0], i, n[nd].v[0]);
		if (n[nd].c[1] != 0)
			dfs(n[nd].c[1], k - i, n[nd].v[1]);
	}
	if (k == 1 && n[nd].c[0] != 0 && n[nd].c[1] != 0)
		dp[nd][k] = val;
	else if (k > 1)
		dp[nd][k] = min(dp[n[nd].c[0]][k - 1], dp[n[nd].c[1]][k - 1]) + val;
	return;
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int N, Q, t1, t2, t3;
	cin >> N >> Q;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> t1 >> t2 >> t3;
		edge[t1].emplace_back(make_pair(t2, t3));
		edge[t2].emplace_back(make_pair(t1, t3));
	}
	fs(1);
	/*for (int i = 1; i <= N; i++)
	{
		cout << n[i].c[0] << ' ' << n[i].v[0] << endl;
		cout << n[i].c[1] << ' ' << n[i].v[1] << endl
			 << endl;
	}*/
	for (int i = 0; i < 103; i++)
	{
		for (int j = 0; j < 103; j++)
		{
			dp[i][j] = INT_MAX;
		}
	}
	dfs(1, Q, 0);
	cout << dp[1][Q] << endl;
	return 0;
}