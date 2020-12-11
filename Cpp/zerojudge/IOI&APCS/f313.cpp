#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a, b, c, d, e[105][105], f[105][105], t = 4, an = 99999999, am = -99999999;
	cin >> a >> b >> c >> d;
	for (int i = 0; i <= a + 1; i++)
	{
		for (int j = 0; j <= b + 1; j++)
		{
			e[i][j] = -1;
		}
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cin >> e[i][j];
		}
	}
	for (int k = 0; k < d; k++)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				f[i][j] = 0;
			}
		}
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				if (e[i][j] == -1)
					continue;
				t = 4;
				if (e[i - 1][j] == -1)
					t--;
				if (e[i][j - 1] == -1)
					t--;
				if (e[i + 1][j] == -1)
					t--;
				if (e[i][j + 1] == -1)
					t--;
				f[i][j] += -1 * t * (e[i][j] / c);
				if (e[i - 1][j] != -1)
					f[i - 1][j] += (e[i][j] / c);
				if (e[i][j - 1] != -1)
					f[i][j - 1] += (e[i][j] / c);
				if (e[i + 1][j] != -1)
					f[i + 1][j] += (e[i][j] / c);
				if (e[i][j + 1] != -1)
					f[i][j + 1] += (e[i][j] / c);
			}
		}
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				e[i][j] += f[i][j];
			}
		}
	}
	/*for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cout << e[i][j] << ' ';
		}
		cout << endl;
	}*/
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (e[i][j] == -1)
				continue;
			an = min(an, e[i][j]);
			am = max(am, e[i][j]);
		}
	}
	cout << an << endl
		 << am << endl;
	return 0;
}