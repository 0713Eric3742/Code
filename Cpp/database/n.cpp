#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
void solve(int cnt)
{
	int a, b, ans = 0, rl, rh;
	int num[10005], sol[10005];
	cin >> a >> b;
	rl = a - 1;
	rh = a * (a + 1) / 2 - 1;
	if (!(rl <= b && b <= rh))
	{
		cout << "Case #" << cnt << ": ";
		cout << "IMPOSSIBLE";
		cout << endl;
		return;
	}
	for (int i = 1; i <= a; i++)
	{
		num[i] = i;
	}
	for (int i = 1; i < a; i++)
	{
		sol[i] = 1;
		b--;
	}
	for (int i = 1; i < a; i++)
	{
		if (b > 0)
		{
			sol[i] += min(a - i, b);
			b -= min(a - i, b);
		}
	}
	for (int i = a - 1; i >= 1; i--)
	{
		//cout << sol[i] << ' ';
		reverse(&num[i], &num[i + sol[i]]);
	}
	//cout << endl;
	cout << "Case #" << cnt << ": ";
	for (int i = 1; i <= a; i++)
	{
		cout << num[i];
		if (i != a)
			cout << ' ';
	}
	cout << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt;
	cin >> cnt;
	for (int i = 1; i <= cnt; i++)
	{
		solve(i);
	}
	return 0;
}