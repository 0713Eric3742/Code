#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int parent[200005] = {};
int find_set(int v)
{
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b)
{
	a = find_set(a);
	b = find_set(b);
	if (a != b)
		parent[b] = a;
}
vector<pair<int, pair<int, int>>> e;
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, t1, t2, t3, ans = 0;
	cin >> a >> b;
	for (int i = 0; i < 200005; i++)
	{
		parent[i] = i;
	}
	for (int i = 0; i < b; i++)
	{
		cin >> t1 >> t2 >> t3;
		e.push_back(make_pair(t3, make_pair(t2, t1)));
	}
	sort(e.begin(), e.end());
	for (int i = 0; i < b; i++)
	{
		if (find_set(e[i].second.second) != find_set(e[i].second.first))
		{
			ans += e[i].first;
			union_sets(e[i].second.first, e[i].second.second);
		}
	}
	cout << ans << endl;
	return 0;
}