#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	string s;
	int t;
	set<int> l;
	l.clear();
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> s >> t;
		if (s[0] == 'd')
		{
			l.erase(l.find(t));
		}
		if (s[0] == 'i')
		{
			l.emplace(t);
		}
		if (s[0] == 'q')
		{
			int dis1 = abs(*prev(l.lower_bound(t)) - t), dis2 = abs(*l.lower_bound(t) - t);
			if (dis1 == dis2)
				cout << *prev(l.lower_bound(t)) << ' ' << *l.lower_bound(t) << endl;
			else
			{
				if (dis1 > dis2)
					cout << *l.lower_bound(t) << endl;
				else
					cout << *prev(l.lower_bound(t)) << endl;
			}
		}
		/*for (auto i = l.begin(); i != l.end(); i++)
		{
			cout << *i << ' ';
		}
		cout << endl;*/
	}
	return 0;
}