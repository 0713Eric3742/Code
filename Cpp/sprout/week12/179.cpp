#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int c[1000005];
vector<int> n[1000005];
bool e_vis[1000005];
bool v_vis[1000005];
int lv[1000005];
int low[1000005];
int bcc[1000005];
int cnt = 1;
vector<int> ans;
stack<int> s;
void dfs(int now, int now_lv)
{
	//cout << now << endl;
	lv[now] = now_lv;
	low[now] = now_lv;
	v_vis[now] = true;
	bool is_important = false;
	//int s_cnt = 0;
	for (int i = 0; i < n[now].size(); i++)
	{
		//cout << ' ' << c[n[now][i]] - now << endl;
		if (e_vis[n[now][i]] == true)
			continue;
		e_vis[n[now][i]] = true;
		//s_cnt++;
		s.push(n[now][i]);
		if (v_vis[c[n[now][i]] - now] == true)
		{
			low[now] = min(low[now], lv[c[n[now][i]] - now]);
			continue;
		}
		else
		{
			dfs(c[n[now][i]] - now, now_lv + 1);
			low[now] = min(low[now], low[c[n[now][i]] - now]);
			if (lv[now] <= low[c[n[now][i]] - now])
			{
				
			}
			cnt++;
		}
	}
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int v, e, t1, t2;
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		cin >> t1 >> t2;
		n[t1].emplace_back(i);
		n[t2].emplace_back(i);
		c[i] = t1 + t2;
	}
	dfs(1, 0);
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}