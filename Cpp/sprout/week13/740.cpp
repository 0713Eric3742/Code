#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int m[7][1505][1505] = {};
void mt(int a, int b, int c, int f, int s, int t)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k < b; k++)
			{
				m[t][i][j] += m[f][i][k] * m[s][k][j];
			}
		}
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bool isprime[200005] = {};
	vector<int> prime;
	for (int i = 2; i < 200000; i++)
	{
		if (!isprime[i])
			prime.push_back(i);
		for (int j = 0; i * prime[j] < 200000; j++)
		{
			isprime[i * prime[j]] = true;
			if (i % prime[j] == 0)
				break;
		}
	}
	srand(time(NULL));
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> m[0][i][j];
		}
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> m[1][i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> m[2][i][j];
		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < a; j++)
		{
			m[3][i][j] = prime[(rand() % 1500) + 500];
			//cout << m[3][i][j] << endl;
		}
	}
	mt(1, a, b, 3, 0, 4);
	mt(1, b, c, 4, 1, 5);
	mt(1, a, c, 3, 2, 6);
	bool ans = true;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < c; j++)
		{
			//cout << m[5][i][j] << ' ' << m[6][i][j] << endl;
			if (m[5][i][j] != m[6][i][j])
				ans = false;
		}
	}
	if (ans)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	/*mt(a, b, c, 0, 1, 7);
	ans = true;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << m[8][i][j] << ' ' << m[2][i][j] << endl;
			if (m[5][i][j] != m[6][i][j])
				ans = false;
		}
	}
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;*/
	return 0;
}