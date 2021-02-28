#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
char m[1005][1005] = {};
long long int ans[1005][1005] = {};
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	while (cin >> a)
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				cin >> m[i][j];
			}
		}
		if (m[0][0] == '.')
			ans[0][0] = 1;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if (m[i][j] == '*')
					continue;
				if (i - 1 >= 0 && m[i - 1][j] == '.')
					ans[i][j] += ans[i - 1][j];
				if (j - 1 >= 0 && m[i][j - 1] == '.')
					ans[i][j] += ans[i][j - 1];
				if (ans[i][j] >= 1000000007)
					ans[i][j] -= 1000000007;
			}
		}
		cout << ans[a - 1][a - 1] << endl;
	}
	return 0;
}