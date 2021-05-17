#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second > b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, t = 0, ans = 0;
	pair<int, int> n[10005];
	while (cin >> a && a)
	{
		t = 0;
		ans = 0;
		for (int i = 0; i < a; i++)
		{
			cin >> n[i].first >> n[i].second;
		}
		sort(n, n + a, cmp);
		for (int i = 0; i < a; i++)
		{
			t += n[i].first;
			ans = max(t + n[i].second, ans);
		}
		cout << ans << endl;
	}
	return 0;
}