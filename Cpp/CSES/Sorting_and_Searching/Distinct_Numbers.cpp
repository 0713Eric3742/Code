#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, t;
	set<int> f;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		auto iter = f.find(t);
		if (iter == f.end())
			f.emplace(t);
	}
	cout << f.size() << '\n';
	return 0;
}