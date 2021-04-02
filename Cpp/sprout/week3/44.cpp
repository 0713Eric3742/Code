//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
int cnt = 1;
char m[1005][1005] = {};
bool vis[1005][1005] = {};
int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}}, sx, sy;
queue<pair<int, pair<int, int>>> bf;
int a, b;
int ans = 0;
void bfs(int a, int b)
{
	while (!bf.empty())
	{
		bf.pop();
	}
	vis[a][b] == true;
	bf.push(make_pair(a, make_pair(b, 0)));
	while (!bf.empty())
	{
		//cout << bf.front().first << ' ' << bf.front().second.first << endl;
		if (m[bf.front().first][bf.front().second.first] == '@')
		{
			ans = bf.front().second.second;
			break;
		}
		for (int i = 0; i < 4; i++)
		{
			if (m[bf.front().first + dir[i][0]][bf.front().second.first + dir[i][1]] != '#' && vis[bf.front().first + dir[i][0]][bf.front().second.first + dir[i][1]] == false)
			{
				bf.push(make_pair(bf.front().first + dir[i][0], make_pair(bf.front().second.first + dir[i][1], bf.front().second.second + 1)));
				vis[bf.front().first + dir[i][0]][bf.front().second.first + dir[i][1]] = true;
			}
		}
		//cout << 'w';
		bf.pop();
	}
}
void solve_subtask()
{
	ans = 0;
	for (int i = 0; i < 1003; i++)
	{
		for (int j = 0; j < 1003; j++)
		{
			vis[i][j] = false;
			m[i][j] = '#';
		}
	}
	string t;
	for (int i = 1; i <= cnt; i++)
	{
		cin >> t;
		for (int j = 1; j <= t.length(); j++)
		{
			m[i][j] = t[j - 1];
			if (m[i][j] == 'K')
			{
				sx = i, sy = j;
			}
			//cout << m[i][j];
		}
		//cout << endl;
	}
	bfs(sx, sy);
	if (ans != 0)
		cout << ans << endl;
	else
		cout << "= =\"" << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> cnt && cnt != 0)
	{
		solve_subtask();
	}
	return 0;
}