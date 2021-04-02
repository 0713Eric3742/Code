#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	list<int> l;
	int a, t1, t2;
	auto t = l.begin();
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		l.emplace_back(i);
	}
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t1 >> t2;
		if (t1 == 0)
		{
			for (auto i = l.begin(); i != l.end(); i++)
			{
				if (*i == t2)
				{
					l.erase(i);
					break;
				}
			}
		}
		if (t1 == 1)
		{
			for (auto i = l.begin(); i != l.end(); i++)
			{
				if (*i == t2)
				{
					if (i == l.begin())
						break;
					t = i;
					t--;
					iter_swap(t, i);
					break;
				}
			}
		}
	}
	for (auto i = l.begin(); i != l.end();)
	{
		cout << *i;
		i++;
		if (i != l.end())
			cout << ' ';
	}
	return 0;
}