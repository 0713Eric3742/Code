#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, b, ans;
	char m[1005][1005] = {};
	int dir[4][2] = {{0, 1},
					 {1, 0},
					 {-1, 0},
					 {0, -1}};
	queue<pair<int, int>> q;
	while (cin >> a >> b)
	{
		ans = 0;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				cin >> m[i][j];
			}
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (m[i][j] == '.')
				{
					q.push(make_pair(i, j));
					while (!q.empty())
					{
						m[q.front().first][q.front().second] = '#';
						for (int k = 0; k < 4; k++)
						{
							if (m[q.front().first + dir[k][0]][q.front().second + dir[k][1]] == '.')
							{
								q.push(make_pair(q.front().first + dir[k][0], q.front().second + dir[k][1]));
								m[q.front().first + dir[k][0]][q.front().second + dir[k][1]] = '#';
							}
						}
						q.pop();
					}
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}