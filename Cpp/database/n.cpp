//codeforces template
#define MANY_SUBTASK
//#pragma GCC optimize(3, "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
void solve_subtask()
{
	int n, k, num[35] = {}, p = 1, t;
	long double a = 0;
	vector<int> ans;
	ans.clear();
	ans.push_back(0);
	ans.push_back(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort(num, num + n);
	/*for (int i = 0; i < n; i++)
	{
		cout << num[i] << ' ';
	}*/
	//cout << endl;
	//cout << LONG_LONG_MAX << endl;
	p = num[0] - 1;
	if (p != 0)
	{
		ans.push_back(p);
		//cout << p << ' ';
	}
	for (int i = 0; i < n - 1; i++)
	{
		p = num[i] + 1;
		if (p < num[i + 1])
		{
			t = abs(p - num[i + 1]) + 1;
			ans.push_back(t / 2);
			//cout << t / 2 << ' ';
		}
	}
	p = num[n - 1] + 1;
	if (p != k + 1)
	{
		ans.push_back(k + 1 - p);
		//cout << k + 1 - p;
	}
	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());
	a = (((long double)(ans[0] + ans[1])) / k);
	cout << a;
	//cout << endl;
	//cout << ans[0] << ' ' << ans[1];
	ans.clear();
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt = 1;
#ifdef MANY_SUBTASK
	cin >> cnt;
#endif
	for (int i = 1; i <= cnt; i++)
	{
		cout << "Case #" << i << ": ";
		solve_subtask();
		if (i != cnt)
			cout << endl;
	}
	return 0;
}