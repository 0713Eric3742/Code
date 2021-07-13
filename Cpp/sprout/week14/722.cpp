#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
	if (a.first > b.first)
		return true;
	if (a.second.first > b.second.first)
		return true;
	return false;
}

vector<pair<int, pair<int, int>>> q;
vector<int> v[200005];
vector<int> p[200005];
int s[200005] = {};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, b, c, t1, t2;
	cin >> a >> b >> c;
	for (int i = 0; i < b; i++)
	{
		cin >> t1 >> t2;
		v[t1].emplace_back(t2);
	}
	for (int i = 0; i <= a; i++)
	{
		v[i].emplace_back(0);
		sort(v[i].begin(), v[i].end());
		p[i].emplace_back(0);
		for (int j : v[i])
		{
			if (j == 0)
				continue;
			p[i].emplace_back(p[i][p[i].size() - 1] + j);
			cout << p[i][p[i].size() - 1] + j << endl;
		}
	}
	for (int i = 0; i < c; i++)
	{
		cin >> t1 >> t2;
		if (t1 > t2)
			swap(t1, t2);
		q.push_back(make_pair(t1, make_pair(t2, i)));
	}
	int l1 = 0, l2 = 0, ans = 0, t;
	sort(q.begin(), q.end(), cmp);
	for (auto i : q)
	{
		t1 = i.first;
		t2 = i.second.first;
		if (l1 == t1 && l2 == t2)
			s[i.second.second] = ans;
		t = 0, ans = 0;
		for (int j : v[t1])
		{
			while (t + 1 < v[t2].size() && j > v[t2][t + 1])
			{
				t++;
			}
			ans += p[t2][t];
		}
		s[i.second.second] = ans;
		l1 = t1;
		l2 = t2;
	}
	for (int i = 0; i < c; i++)
	{
		cout << s[i] << endl;
	}

	return 0;
}