#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	long long int a, ans;
	while (cin >> a)
	{
		ans = 0;
		while (a)
		{
			ans += a / 5;
			a /= 5;
		}
		cout << ans << endl;
	}

	return 0;
}