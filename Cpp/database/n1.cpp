//#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define int long long
using namespace std;
int query(int l, int r)
{
	int t;
	cout << "? " << l << " " << r << endl;
	cin >> t;
	return t;
}
void solve_subtask()
{
	int a, l, r, f;
	cin >> a;
	l = 1, r = a;
	f = query(l, r);
	while (l != r)
	{
		int mid = (l + r) / 2;
		int t;
		if (l + 2 >= r)
		{
			t = query(l, r);
			f = t;
			t = query(l, l+1);
			if (f == t)
			{
				if (t == l)
				{
					cout << "! " << l + 1 << endl;
				}
				else
				{
					cout << "! " << l << endl;
				}
			}
			else
			{
				t = query(l + 1, l + 2);
				if (t == l+1)
				{
					cout << "! " << l+2 << endl;
				}
				else
				{
					cout << "! " << l+1 << endl;
				}
			}
			return;
		}
		if (l <= f && f <= mid)
		{
			t = query(l, mid);
			if (t == f)
			{
				r = mid;
			}
			else
			{
				l = mid + 1;
			}
		}
		else
		{
			t = query(mid + 1, r);
			if (t == f)
			{
				l = mid + 1;
			}
			else
			{
				r = mid;
			}
		}
		f = t;
	}
}
main()
{
	int cnt = 1;
	//cin >> cnt;
	while (cnt--)
	{
		solve_subtask();
	}
	return 0;
}