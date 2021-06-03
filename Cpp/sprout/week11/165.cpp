//codeforces template
#define MANY_SUBTASK
//#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
vector<int> e[100005];
int s[100005] = {};
bool cmp(int a, int b)
{
	return a < b;
}
void solve_subtask()
{
	vector<int> ans;
	ans.clear();
	priority_queue<int, vector<int>, greater<int>> pq;
	while (!pq.empty())
		pq.pop();
	int a, b, t1, t2;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		s[i] = 0;
		e[i].clear();
	}
	for (int i = 0; i < b; i++)
	{
		cin >> t1 >> t2;
		e[t1].emplace_back(t2);
		s[t2]++;
	}
	for (int i = 0; i < a; i++)
	{
		sort(e[i].begin(), e[i].end(), cmp);
		if (s[i] == 0)
		{
			//cout << i << endl;
			pq.push(i);
		}
	}
	while (!pq.empty())
	{
		t1 = pq.top();
		ans.emplace_back(t1);
		pq.pop();
		for (int i = 0; i < e[t1].size(); i++)
		{
			s[e[t1][i]]--;
			if (s[e[t1][i]] == 0)
			{
				pq.push(e[t1][i]);
			}
		}
	}
	if (ans.size() == a)
	{
		for (int i = 0; i < a; i++)
		{
			cout << ans[i];
			if (i != a - 1)
				cout << ' ';
		}
		cout << endl;
	}
	else
		cout << "QAQ" << endl;
	/*for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << ' ';
	}
	cout << endl;*/
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