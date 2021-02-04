#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a, b;
	while (cin >> a >> b && a != -1 || b != -1)
	{
		if (a > b)
			swap(a, b);
		cout << min(abs(b - a), abs(a - b + 100)) << endl;
	}
	return 0;
}