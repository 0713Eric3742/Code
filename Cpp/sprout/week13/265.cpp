#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int __int128_t
#define M 5130855700862119
int h[2][500005];
int hb[500005];
void do_hash(string a, int idx)
{
	int p = 29;
	if (idx == 0)
		hb[0] = 1;
	for (int i = 1; i <= a.length(); i++)
	{
		h[idx][i] = (h[idx][i - 1] * p + a[i - 1]) % M;
		if (idx == 0)
			hb[i] = (hb[i - 1] * p) % M;
	}
}
int get_hash(int l, int r, int idx)
{
	return (h[idx][r + 1] - (h[idx][l] * hb[r - l + 1]) % M + M) % M;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, t;
	cin >> s >> t;
	vector<int32_t> ans;
	do_hash(t, 0);
	do_hash(s, 1);
	int c = get_hash(0, s.size() - 1, 1);
	for (int32_t l = 0; l + s.size() - 1 < t.size(); l++)
	{
		if (get_hash(l, l + s.size() - 1, 0) == c)
			ans.push_back(l);
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i != ans.size() - 1)
			cout << ' ';
	}
	cout << endl;
	return 0;
}