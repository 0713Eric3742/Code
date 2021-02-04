#include <bits/stdc++.h>
using namespace std;
string a;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	a.clear();
	for (long long int i = 1; i < 100000000; i++)
	{
		if (a.length() > 9000000000)
			break;
		a += to_string(i);
	}
	cout << a << '\n';
	int b;
	while (cin >> b)
	{
		cout << a[b - 1] << '\n';
	}
	return 0;
}