#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	while (cin >> a)
	{
		if (a == 2 || a == 3)
		{
			cout << "NO SOLUTION" << endl;
			continue;
		}
		for (int i = a - 1; i >= 1; i -= 2)
		{
			cout << i << ' ';
		}
		for (int i = a; i >= 1; i -= 2)
		{
			cout << i << ' ';
		}
		cout << endl;
	}
	return 0;
}