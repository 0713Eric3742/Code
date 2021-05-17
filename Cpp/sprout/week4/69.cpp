#include <bits/stdc++.h>
using namespace std;
struct horse
{
	long long a, b;
};
long long oppo[10005];
horse my[10005];
long long n, k;
vector<long long> cur;
bool check(long long);
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		long long l = -1, r = 100000000;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> my[i].b >> my[i].a;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> oppo[i];
		}
		sort(oppo, oppo + n, [](long long a, long long b) { return a > b; });
		bool jj = check(r);
		if (!jj)
		{
			puts("-1");
		}
		else
		{
			while (r - l != 1)
			{
				long long mid = (l + r) / 2;
				bool jj = check(mid);
				if (jj)
					r = mid;
				else
					l = mid;
			}
			cout << r << endl;
		}
	}
	return 0;
}
bool check(long long x)
{
	int win = 0, cWhere = 0;
	cur.clear();
	for (int i = 0; i < n; i++)
		cur.push_back(my[i].a * x + my[i].b);
	sort(cur.begin(), cur.end(), [](long long a, long long b) { return a > b; });
	for (int i = 0; i < n; i++)
	{
		if (cur[cWhere] > oppo[i])
		{
			cWhere++;
			win++;
		}
	}
	return (win >= k);
}