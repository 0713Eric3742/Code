#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a, b, c, d, book[100005] = {},head=1,tail=1;
	vector<pair<int, int>> edges[100005];
	pair<int, int> queue[100005];
	cin >> a;
	for (int i = 0; i < a - 1; i++)
	{
		cin >> b >> c >> d;
		edges[b].emplace_back(make_pair(c, d));
		edges[c].emplace_back(make_pair(b, d));
	}
	queue[tail].first = 1;
	queue[tail].second = 0;
	book[1] = 1;
	while (head<tail)
	{
		for (int i = 0; i < edges[queue[head].first].size(); i++)
		{
			if (book[edges[i].first]==0)
		}
		
		head++;
	}
	
	return 0;
}