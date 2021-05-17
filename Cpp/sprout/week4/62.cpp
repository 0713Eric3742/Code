#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int num[9][9] = {};
bool flag;
void check()
{
	
	for (int i = 0; i < 9; i++)
	{
		/* code */
	}
	
}
void dfs(int r, int c)
{
	if (flag)
	{
		return;
	}
	//cout << r << ' ' << c << endl;
	int chunkx, chunky;
	bool check[10] = {};
	for (int i = 0; i < 9; i++)
	{
		check[i] = false;
	}
	if (r == 9)
	{
		if (!flag)
		{
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					cout << num[i][j];
				}
			}
			cout << endl;
			flag = true;
		}
		return;
	}
	if (num[r][c] != 0)
	{
		dfs(r + (c + 1) / 9, (c + 1) % 9);
		return;
	}
	for (int i = 0; i < 9; i++)
	{
		check[num[i][c]] = true;
		check[num[r][i]] = true;
	}
	chunkx = r / 3;
	chunky = c / 3;
	//cout << r << ' ' << c << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//cout << chunkx * 3 + i << ' ' << chunky * 3 + j << endl;
			check[num[chunkx * 3 + i][chunky * 3 + j]] = true;
		}
	}
	/*for (int i = 1; i <= 9; i++)
	{
		if (!check[i])
		{
			//cout << i << ' ';
		}
	}
	cout << endl;*/
	for (int i = 1; i <= 9; i++)
	{
		if (!check[i])
		{
			//cout << r << ' ' << c << ' ' << i << endl;
			num[r][c] = i;
			dfs(r + (c + 1) / 9, (c + 1) % 9);
			num[r][c] = 0;
		}
	}
	return;
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	string s;
	while (cin >> s && s != "end")
	{
		flag = false;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (s[i * 9 + j] != '.')
					num[i][j] = s[i * 9 + j] - '0';
				else
					num[i][j] = 0;
			}
		}
		/*for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << num[i][j];
			}
		}
		cout << endl;*/
		dfs(0, 0);
		if (!flag)
		{
			cout << "No solution." << endl;
		}
	}
	return 0;
}