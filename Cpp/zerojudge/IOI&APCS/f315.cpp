#include <bits/stdc++.h>
using namespace std;
long long int BIT[200005];
int lowbit(int val)
{
	return val & -val;
}
int main(int argc, char const *argv[])
{
	long long int a, b, t, ans = 0, v;
	pair<int, int> c[100005];
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		c[i].first = 0;
		c[i].second = 0;
	}
	for (int i = 1; i <= 2 * a; i++)
	{
		cin >> t;
		if (c[t].first == 0)
			c[t].first = i;
		else
			c[t].second = i;
	}
	//---- create BIT ------
	for (int i = 0; i <= 2 * a; i++)
	{
		BIT[i] = 0;
	}
	//-----------------------
	//----- change val ------
	for (int i = 1; i <= a; i++)
	{
		b = c[i].first, v = 1;
		while (b <= 2 * a)
		{
			BIT[b] += v;
			b += lowbit(b);
		}
		b = c[i].second, v = 1;
		while (b <= 2 * a)
		{
			BIT[b] += v;
			b += lowbit(b);
		}
		b = c[i].first;
		while (b >= 1)
		{
			if (b == 0)
				break;
			ans -= BIT[b];
			b -= lowbit(b);
		}
		b = c[i].second - 1;
		while (b >= 1)
		{
			if (b == 0)
				break;
			ans += BIT[b];
			b -= lowbit(b);
		}
	}
	cout << ans << endl;
	return 0;
}