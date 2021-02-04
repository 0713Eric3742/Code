#include <bits/stdc++.h>
using namespace std;
int u[10005];	
vector<int> node;
void union_set(int a, int b)
{
	if (u[a] == a)
	{
		u[b] = a;
		return;
	}
	node.clear();
	node.emplace_back(b);
	int t = b;
	while (u[t] != t)
	{
		t = u[t];
		node.emplace_back(t);
		
	}
	for (int i = 0; i < node.size(); i++)
	{
		u[node[i]] = a;
	}
	return;
}
bool find_set(int a, int b)
{
	int t = b;
	while (u[t] != t)
	{
		if (t == a || u[t] == a)
			return true;
		t = u[t];
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int a, b, c, t1, t2;
	cin >> a >> b >> c;
	for (int i = 0; i <= a; i++)
	{
		u[i] = i;
	}
	for (int i = 0; i < b; i++)
	{
		cin >> t1 >> t2;
		union_set(t1, t2);
	}
	for (int i = 0; i < c; i++)
	{
		cin >> t1 >> t2;
		if (find_set(t1, t2))
			cout << ":)" << endl;
		else
			cout << ":(" << endl;
	}
	return 0;
}