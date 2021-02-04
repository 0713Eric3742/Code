#include <bits/stdc++.h>
using namespace std;
pair<int, pair<int, int>> q[1000000];
char m[105][105];
bool b[105][105];
int main()
{
	int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	int a, h = 0, t = 0, ans = -1, tx, ty;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> m[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			b[i][j] = false;
		}
	}
	//---bfs---
	q[t].first = 1;
	q[t].second.first = 1;
	q[t].second.second = 1;
	t++;
	b[1][1] = true;
	while (h < t)
	{
		for (int i = 0; i < 4; i++)
		{
			tx = q[h].first + d[i][0];
			ty = q[h].second.first + d[i][1];
			if (m[tx][ty] == '#')
				continue;
			if (b[tx][ty] == true)
				continue;
			if (m[tx][ty] == '.')
			{
				b[tx][ty] = 1;
				q[t].first = tx;
				q[t].second.first = ty;
				q[t].second.second = q[h].second.second + 1;
				t++;
			}
			if (tx == a - 2 && ty == a - 2)
			{
				cout << q[t - 1].second.second << endl;
				goto Exit;
			}
		}
		h++;
	}
	cout << "No solution!" << endl;
	return 0;
Exit:
	return 0;
}