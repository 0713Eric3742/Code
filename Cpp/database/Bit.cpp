#include <bits/stdc++.h>
using namespace std;
int BIT[200005];
int lowbit(int val)
{
	return val & -val;
}
int main(int argc, char const *argv[])
{
	int a, b, c[200005], t, ans, v;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> c[i];
	}
	//---- create BIT ------
	for (int i = 0; i <= a; i++)
	{
		BIT[i] = 0;
	}
	for (int i = 0; i <= a; i++)
	{
		t = i - 1;
		BIT[i] = c[i];
		while (t > i - lowbit(i))
		{
			BIT[i] += BIT[t];
			t -= lowbit(t);
		}
	}
	for (int i = 1; i <= a; i++)
	{
		cout << BIT[i] << ' ';
	}
	cout << endl;
	//-----------------------
	//----- change val ------
	cin >> b >> v;
	while (b <= a)
	{
		BIT[b] += v;
		b += lowbit(b);
	}
	for (int i = 1; i <= a; i++)
	{
		cout << BIT[i] << ' ';
	}
	cout << endl;
	//-------------------------
	//--------- query ---------
	cin >> b;
	ans = 0;
	while (b >= 1)
	{
		ans += BIT[b];
		b -= lowbit(b);
	}
	cout << ans << endl;
	//--------------------------
	return 0;
}