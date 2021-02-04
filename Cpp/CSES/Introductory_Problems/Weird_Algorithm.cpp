#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	long long int a;
	while (cin >> a)
	{
		while (a != 1)
		{
			cout << a << ' ';
			if (a % 2 == 0)
				a /= 2;
			else
				a += 2 * a + 1;
		}
		cout << 1 << endl;
	}
	return 0;
}