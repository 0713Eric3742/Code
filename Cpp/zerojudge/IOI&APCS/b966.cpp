#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, t = 0, l = 0, last;
	bool s = false;
	map<int, int> ans;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		if (ans.find(b) == ans.end())
			ans.emplace(b, 1);
		else
			ans.find(b)->second++;
		if (ans.find(c) == ans.end())
			ans.emplace(c, -1);
		else
			ans.find(c)->second--;
	}
	for (auto i = ans.begin(); i != ans.end(); i++)
	{

		if (t > 0)
		{
			s = true;
			l += i->first - last;
		}
		if (t < 0)
			s = false;
		t += i->second;
		last = i->first;
	}
	cout << l << endl;
	return 0;
}