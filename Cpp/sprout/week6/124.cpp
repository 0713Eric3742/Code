/*#include <bits/stdc++.h>
using namespace std;
int t = 1, ma[16][16] = {};
void Report(int x1, int y1, int x2, int y2, int x3, int y3)
{
	//cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << ' ' << x3 << ' ' << y3 << endl;
	ma[x1][y1] = t;
	ma[x2][y2] = t;
	ma[x3][y3] = t;
	t++;
}*/
void solve(int N, int X, int Y);
void mysolve(int sx, int sy, int size, int x, int y)
{
	int fx = ((x - sx + 1) * 2 - 1) / size, fy = ((y - sy + 1) * 2 - 1) / size;
	//cout << x << ' ' << y << endl;
	//cout << fx << ' ' << fy << endl;
	if (size == 2)
	{
		if (fx == 0 && fy == 0)
			Report(sx + 1, sy + 1, sx, sy + 1, sx + 1, sy);
		if (fx == 1 && fy == 0)
			Report(sx + 1, sy + 1, sx, sy, sx, sy + 1);
		if (fx == 0 && fy == 1)
			Report(sx + 1, sy + 1, sx, sy, sx + 1, sy);
		if (fx == 1 && fy == 1)
			Report(sx, sy + 1, sx, sy, sx + 1, sy);
		return;
	}
	else
	{

		if (fx == 0 && fy == 0)
		{
			Report(sx + size / 2, sy + size / 2, sx + size / 2 - 1, sy + size / 2, sx + size / 2, sy + size / 2 - 1);
			mysolve(sx, sy, size / 2, x, y);
			mysolve(sx + size / 2, sy, size / 2, sx + size / 2, sy + size / 2 - 1);
			mysolve(sx, sy + size / 2, size / 2, sx + size / 2 - 1, sy + size / 2);
			mysolve(sx + size / 2, sy + size / 2, size / 2, sx + size / 2, sy + size / 2);
		}
		if (fx == 1 && fy == 0)
		{
			Report(sx + size / 2, sy + size / 2, sx + size / 2 - 1, sy + size / 2, sx + size / 2 - 1, sy + size / 2 - 1);
			mysolve(sx, sy, size / 2, sx + size / 2 - 1, sy + size / 2 - 1);
			mysolve(sx + size / 2, sy, size / 2, x, y);
			mysolve(sx, sy + size / 2, size / 2, sx + size / 2 - 1, sy + size / 2);
			mysolve(sx + size / 2, sy + size / 2, size / 2, sx + size / 2, sy + size / 2);
		}
		if (fx == 0 && fy == 1)
		{
			Report(sx + size / 2, sy + size / 2, sx + size / 2, sy + size / 2 - 1, sx + size / 2 - 1, sy + size / 2 - 1);
			mysolve(sx, sy, size / 2, sx + size / 2 - 1, sy + size / 2 - 1);
			mysolve(sx + size / 2, sy, size / 2, sx + size / 2, sy + size / 2 - 1);
			mysolve(sx, sy + size / 2, size / 2, x, y);
			mysolve(sx + size / 2, sy + size / 2, size / 2, sx + size / 2, sy + size / 2);
		}
		if (fx == 1 && fy == 1)
		{
			Report(sx + size / 2, sy + size / 2 - 1, sx + size / 2 - 1, sy + size / 2, sx + size / 2 - 1, sy + size / 2 - 1);
			mysolve(sx, sy, size / 2, sx + size / 2 - 1, sy + size / 2 - 1);
			mysolve(sx + size / 2, sy, size / 2, sx + size / 2, sy + size / 2 - 1);
			mysolve(sx, sy + size / 2, size / 2, sx + size / 2 - 1, sy + size / 2);
			mysolve(sx + size / 2, sy + size / 2, size / 2, x, y);
		}
	}
}
void solve(int N, int X, int Y)
{
	mysolve(1, 1, N, X, Y);
}
/*int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int x = 6, y = 3;
	solve(8, x, y);
	ma[x][y] = -1;
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			cout << ma[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}*/