#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	long long int a, ans, t;
	while (cin >> a)
	{
		ans = a * (a + 1) / 2;
		for (int i = 1; i < a; i++)
		{
			cin >> t;
			ans -= t;
		}
		cout << ans << endl;
	}
	return 0;
}