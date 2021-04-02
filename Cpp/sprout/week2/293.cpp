#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
vector<int> child[100005];
int ans[100005], b, weight[100005] = {};
bool vis[100005];
void dfs(int node)
{
	int n = 0;
	weight[node] = 0;
	ans[node] = 1;
	vis[node] = true;
	for (int i = 0; i < child[node].size(); i++)
	{
		if (!vis[child[node][i]])
		{
			dfs(child[node][i]);
		}
		ans[node] += ans[child[node][i]];
		weight[node] = max(ans[child[node][i]], weight[node]);
		n += ans[child[node][i]];
	}
	//cout << node << ' ' << weight[node] << endl;
	weight[node] = max(weight[node], (b - n - 1));
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, t1, t2, min = 99999999, n;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		for (int j = 0; j < b + 3; j++)
		{
			child[j].clear();
			ans[j] = 1;
			vis[j] = false;
			weight[j] = 0;
		}
		for (int j = 1; j < b; j++)
		{
			cin >> t1 >> t2;
			child[t1].emplace_back(t2);
			child[t2].emplace_back(t1);
		}
		dfs(0);
		for (int j = 0; j < b; j++)
		{
			if (weight[j] < min)
			{
				min = weight[j];
				n = j;
			}
			cout << weight[j] << ' ' << j << endl;
		}
		cout << n;
	}
	return 0;
}