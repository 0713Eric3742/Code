#include <stdio.h>
#include <algorithm>
using namespace std;
int w[100];
int v[100];
int dp[1000001];
int main()
{
	int t, n, m;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n, &m);
		int vs = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &w[i], &v[i]);
			vs += v[i];
		}
		for (int i = 1; i <= vs; i++)
		{
			dp[i] = 1000001;
		}
		dp[0] = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = vs; j >= v[i]; j--)
			{
				dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
			}
		}
		int ans = 0;
		for (int i = 1; i <= vs; i++)
		{
			if (dp[i] <= m)
			{
				ans = i;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}