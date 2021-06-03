#include <bits/stdc++.h>
using namespace std;
int e[505][505];
int vis[505][505];
int s = 0, e = 0;
void dfs(int u)
{
	cout << u << endl;
	for (int v = 1; v <= 500; v++)
	{
		if (e[u][v] && !vis[u][v])
		{
			vis[u][v] = true;
			vis[v][u] = true;
			dfs(v);
		}
	}
}
int main()
{
	int a, t1, t2, d[505] = {};
	vector<int> t;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t1 >> t2;
		e[t1][t2] = 1;
		e[t2][t1] = 1;
		d[t1]++;
		d[t2]++;
	}
	for (int i = 0; i < 505; i++)
	{
		if (d[i] % 2 == 1)
			t.emplace_back(i);
	}
	if (t.empty())
		s = 1;
	else
		s = t[0], e = t[1];
	dfs(s);
	return 0;
}