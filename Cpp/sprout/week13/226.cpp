#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, b;
	string s;
	unordered_map<string, int> um;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> s;
		auto j = um.find(s);
		if (j == um.end())
			um.emplace(make_pair(s, 1));
		else
			j->second++;
	}
	for (int i = 0; i < b; i++)
	{
		cin >> s;
		if (um.find(s) != um.end())
			cout << um.find(s)->second << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}