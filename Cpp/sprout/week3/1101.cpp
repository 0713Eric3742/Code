#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
vector<int> g[100005];
bool vis[100005] = {};
int c[100005] = {};
bool ans = true;
void dfs(int node, int color)
{
	vis[node] = true;
	c[node] = color + 1;
	//cout << node << endl;
	for (int i = 0; i < g[node].size(); i++)
	{
		if (vis[g[node][i]] == true && c[node] + c[g[node][i]] != 3)
		{
			ans = false;
			return;
		}
		else
		{
			if (vis[g[node][i]] == false)
				dfs(g[node][i], 1 - color);
		}
	}
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, b, t1, t2;
	while (cin >> a && a != 0)
	{
		ans = true;
		cin >> b;
		for (int i = 0; i < a + 3; i++)
		{
			g[i].clear();
			vis[i] = false;
			c[i] = 0;
		}
		for (int i = 0; i < b; i++)
		{
			cin >> t1 >> t2;
			g[t1].emplace_back(t2);
			g[t2].emplace_back(t1);
		}
		dfs(0, 0);
		if (ans)
		{
			cout << "NORMAL." << endl;
		}
		else
		{
			cout << "RAINBOW." << endl;
		}
	}

	return 0;
}