#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
void solve(int cnt)
{
	int a, ans = 0;
	int num[10005];
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> num[i];
	}
	for (int i = 1; i < a; i++)
	{
		for (int j = i; j <= a; j++)
		{
			if (num[j] == i)
			{
				ans += j - i + 1;
				reverse(&num[i], &num[j + 1]);
			}
		}
	}
	cout << "Case #" << cnt << ": " << ans << endl;
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