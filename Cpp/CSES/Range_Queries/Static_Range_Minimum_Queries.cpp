#include <bits/stdc++.h>
using namespace std;
long long int segment_tree[800005];
long long int n[200005];
long long int ans;
inline void build(int l, int r, int idx)
{
	if (l == r)
	{
		segment_tree[idx] = n[l];
		return;
	}
	int mid = (l + r) / 2;
	build(l, mid, idx * 2 + 1);
	build(mid + 1, r, idx * 2 + 2);
	segment_tree[idx] = min(segment_tree[idx * 2 + 1], segment_tree[idx * 2 + 2]);
}
inline void modify(int l, int r, int idx, int m_idx, long long int val)
{
	if (l == r)
	{
		segment_tree[idx] = val;
		return;
	}
	int mid = (l + r) / 2;
	if (l <= m_idx && m_idx <= mid)
		modify(l, mid, idx * 2 + 1, m_idx, val);
	if (mid + 1 <= m_idx && m_idx <= r)
		modify(mid + 1, r, idx * 2 + 2, m_idx, val);
	segment_tree[idx] = min(segment_tree[idx * 2 + 1], segment_tree[idx * 2 + 2]);
}
inline void query(int l, int r, int idx, int q_l, int q_r)
{
	if ((l < q_l && r < q_l) || (q_r < l && q_r < r))
		return;
	if (q_l <= l && r <= q_r)
	{
		ans = min(ans, segment_tree[idx]);
		return;
	}
	if (l == r)
		return;
	int mid = (l + r) / 2;
	query(l, mid, idx * 2 + 1, q_l, q_r);
	query(mid + 1, r, idx * 2 + 2, q_l, q_r);
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, t1, t2;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> n[i];
	}
	build(0, a - 1, 0);
	for (int i = 0; i < b; i++)
	{
		cin >> t1 >> t2;
		ans = LONG_LONG_MAX;
		query(0, a - 1, 0, t1 - 1, t2 - 1);
		cout << ans << '\n';
	}
	return 0;
}