#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, ans;
	string c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		ans = 0;
		for (int j = 0; j < c.length(); j++)
		{
			if (c[j] == '.')
			{
				for (int k = j; k <= j + 2 && k < c.length(); k++)
				{
					c[k] = '#';
				}
				ans++;
			}
		}
		cout << "Case " << i + 1 << ": " << ans << endl;
	}
	return 0;
}