//codeforces template
#define MANY_SUBTASK
//#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
char m[1005][1005] = {};
bool vis[1005][1005] = {};
int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
queue<pair<int, int>> bf;
int ans = 0;
int a, b;
void bfs(int a, int b)
{
	vis[a][b] == true;
	bf.push(make_pair(a, b));
	while (!bf.empty())
	{
		m[bf.front().first][bf.front().second] = '#';
		for (int i = 0; i < 4; i++)
		{
			if (m[bf.front().first + dir[i][0]][bf.front().second + dir[i][1]] == '.' && vis[bf.front().first + dir[i][0]][bf.front().second + dir[i][1]] == false)
			{
				bf.push(make_pair(bf.front().first + dir[i][0], bf.front().second + dir[i][1]));
				vis[bf.front().first + dir[i][0]][bf.front().second + dir[i][1]] = true;
			}
		}
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
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cin >> m[i][j];
		}
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (m[i][j] == '.')
			{
				bfs(i, j);
				ans++;
				//cout << i << ' ' << j << endl;
			}
		}
	}
	cout << ans << endl;
}
int cnt = 1;
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef MANY_SUBTASK
	cin >> cnt;
#endif
	while (cnt--)
	{
		solve_subtask();
	}
	return 0;
}