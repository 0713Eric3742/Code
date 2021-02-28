#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	long long int a, ans[1000005] = {}, mod = 1000000007;
	ans[1] = 1, ans[2] = 2;
	for (int i = 3; i <= 1000000; i++)
	{
		for (int j = i; j >= i - 6 && j >= 1; j--)
		{
			ans[i] += ans[j];
		}
		if (i < 7)
			ans[i]++;
		ans[i] %= mod;
	}
	while (cin >> a)
	{
		cout << ans[a] << endl;
	}
	return 0;
}