#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
vector<int> child[100005];
int ans[100005];
bool vis[100005];
void dfs(int node)
{
	vis[node] = true;
	for (int i = 0; i < child[node].size(); i++)
	{
		if (!vis[child[node][i]])
			dfs(child[node][i]);
		ans[node] += ans[child[node][i]];
	}
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, b, c, t1, t2;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		for (int j = 0; j < b + 3; j++)
		{
			child[j].clear();
			ans[j] = 1;
			vis[j] = false;
		}
		for (int j = 0; j < c; j++)
		{
			cin >> t1 >> t2;
			child[t1].emplace_back(t2);
		}
		for (int j = 1; j <= b; j++)
		{
			if (vis[j] == false)
				dfs(j);
		}
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> t1;
			cout << ans[t1] << endl;
		}
	}
	return 0;
}