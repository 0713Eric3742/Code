#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	long long int a, t, l, ans;
	while (cin >> a)
	{
		ans = 0;
		l = 0;
		for (int i = 0; i < a; i++)
		{
			cin >> t;
			ans += max((long long int)0, l - t);
			l = max(l, t);
		}
		cout << ans << endl;
	}
	return 0;
}