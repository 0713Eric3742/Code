//#pragma GCC optimize(3, "Ofast", "inline")
#include <iostream>
#include <vector>
using namespace std;
int e[100005][2];
vector<int> q[100005];
vector<int> edges[100005];
int ans = 0;
bool vis[100005] = {};
int main()
{
	int a, b, t1, t2;
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> e[i][0] >> e[i][1];
		edges[e[i][0]].emplace_back(e[i][1]);
		edges[e[i][1]].emplace_back(e[i][0]);
	}
	for (int i = 0; i < b; i++)
	{
		if (edges[e[i][0]].size() > edges[e[i][1]].size())
			swap(e[i][0], e[i][1]);
		for (int j : edges[e[i][0]])
		{
			q[e[i][1]].emplace_back(j);
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (q[i].empty())
			continue;
		for (int j : edges[i])
		{
			vis[j] = true;
		}
		for (int j : q[i])
		{
			if (vis[j] == true)
				ans++;
		}
		for (int j : edges[i])
		{
			vis[j] = false;
		}
	}
	cout << ans / 3 << endl;
	return 0;
}