//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
void solve_subtask()
{
	vector<int> num;
	num.clear();
	int a, ans = 0, t;
	bool sw = false;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		if (!sw)
		{
			if (num.empty() || t > num[num.size() - 1])
			{
				num.emplace_back(t);
				ans++;
				sw = !sw;
			}
			else
			{
				num.pop_back();
				num.emplace_back(t);
			}
		}
		else
		{
			if (t < num[num.size() - 1])
			{
				num.emplace_back(t);
				ans++;
				sw = !sw;
			}
			else
			{
				num.pop_back();
				num.emplace_back(t);
			}
		}
	}
	cout << ans - ((ans - 1) % 2) << endl;
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