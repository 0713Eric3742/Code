//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
const int mod = 998244353;
int pre[100005];
int inv[100005];
int prei[100005];
void build(int n)
{
	pre[1] = pre[0] = 1, inv[1] = inv[0] = 1, prei[1] = prei[0] = 1;
	for (int i = 2; i <= n; i++)
	{
		pre[i] = pre[i - 1] * i % mod;
		inv[i] = mod - (mod / i * inv[mod % i]) % mod;
		prei[i] = prei[i - 1] * inv[i] % mod;
	}
}
int C(int n, int k)
{
	return pre[n] * prei[k] % mod * prei[n - k] % mod;
}
void solve_subtask()
{
	int a, ans = 1, l[2] = {}, cnt[2] = {};
	cin >> a;
	build(a + 5);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
		{
			cnt[i % 2]++;
		}
		l[i % 2]++;
	}
	ans += (C(l[0], cnt[0]) + C(l[1], cnt[1]) + mod) % mod;
	cout << ans << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt = 1;
#ifdef MANY_SUBTASK
	cin >> cnt;
#endif
	while (cnt--)
	{
		solve_subtask();
	}
	return 0;
}