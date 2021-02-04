#include <bits/stdc++.h>
using namespace std;
char a[100] = {};
void dfs(int step, int range, int b, int c)
{
	if (b > range / 2)
		return;
	if (c > range / 2)
		return;
	if (b < c)
		return;
	if (step == range + 1)
	{
		cout << a << '\n';
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			a[step - 1] = '(';
			dfs(step + 1, range, b + 1, c);
		}
		if (i == 1)
		{
			a[step - 1] = ')';
			dfs(step + 1, range, b, c + 1);
		}
	}
	return;
}
main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int r;
	while (cin >> r)
	{
		dfs(1, r * 2, 0, 0);
	}
}