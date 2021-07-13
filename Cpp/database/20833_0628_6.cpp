#include <bits/stdc++.h>
using namespace std;
vector<long long int> li, ri;
long long int b[500005], ans, t;
void divide(int l, int r)
{
	if (l >= r)
		return;
	long long int mid = (l + r) / 2;
	li.clear();
	ri.clear();
	for (int i = l; i <= mid; i++)
	{
		li.emplace_back(b[i]);
	}
	for (int i = mid + 1; i <= r; i++)
	{
		ri.emplace_back(b[i]);
	}
	t = 0;
	sort(li.begin(), li.end());
	sort(ri.begin(), ri.end());
	for (int i = 0; i < ri.size(); i++)
	{
		while (t != li.size() && li[t] <= ri[i])
			t++;
		if (t == li.size())
			break;
		ans += (li.size() - t);
	}
	divide(l, mid);
	divide(mid + 1, r);
}
int main(int argc, char const *argv[])
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int a;
	while (cin >> a && a != 0)
	{
		ans = 0;
		for (int i = 0; i < a; i++)
		{
			cin >> b[i];
		}
		divide(0, a - 1);
		cout << ans << '\n';
	}
	return 0;
}