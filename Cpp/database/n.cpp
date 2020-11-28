#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, t, f;
	map<int, int> c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		c.clear();
		f = 0;
		for (int i = 0; i < b; i++)
		{
			cin >> t;
			auto it = c.find(t);
			if (it == c.end())
				c.emplace(t, i + 1);
			else
				it->second = -1;
		}
		for (auto i = c.begin(); i != c.end(); i++)
		{
			if (i->second != -1)
			{
				cout << i->second << endl;
				f = 1;
				break;
			}
		}
		if (f == 0) cout << -1 << endl;
	}
	return 0;
}