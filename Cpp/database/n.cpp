#include <bits/stdc++.h>
using namespace std;
int segment_tree[400005];
int n[100005];
int sum;
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
	segment_tree[idx] = segment_tree[idx * 2 + 1] + segment_tree[idx * 2 + 2];
}
inline void modify(int l, int r, int idx, int m_idx, int val)
{
	if (!(l <= m_idx && m_idx <= r))
		return;
	if (l == r)
	{
		segment_tree[idx] += val;
		return;
	}
	int mid = (l + r) / 2;
	modify(l, mid, idx * 2 + 1, m_idx, val);
	modify(mid + 1, r, idx * 2 + 2, m_idx, val);
	if (l <= m_idx && m_idx <= r)
		segment_tree[idx] += val;
}
inline void query(int l, int r, int idx, int q_l, int q_r)
{
	if (q_l <= l && r <= q_r)
	{
		sum += segment_tree[idx];
		return;
	}
	if (l == r)
		return;
	int mid = (l + r) / 2;
	query(l, mid, idx * 2 + 1, q_l, q_r);
	query(mid + 1, r, idx * 2 + 2, q_l, q_r);
	return;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, t1, t2, t3;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> n[i];
	}
	build(0, a - 1, 0);
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> t1 >> t2;
		sum = 0;
		query(0, a - 1, 0, t1-1, t2-1);
		cout << sum << '\n';
	}
	return 0;
}