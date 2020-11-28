#include<bits/stdc++.h>
using namespace std;
long long int c[51][10001],dp[51][10001],d[51],ans=-2147483648;
int main(int argc, char const *argv[])
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cin>>c[i][j];
		}
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			d[j]=d[j-1]+c[i][j];
		}
		for (int j = 1; j <= b; j++)
		{
			dp[i][j]=-100000000000;
			for (int k = 1; k <= b; k++)
			{
				if(j > k) dp[i][j]=max(dp[i][j],d[j]-d[k-1]+dp[i-1][k]);
				if(j < k) dp[i][j]=max(dp[i][j],d[k]-d[j-1]+dp[i-1][k]);
				if(j == k) dp[i][j]=max(dp[i][j],c[i][j]+dp[i-1][k]);
			}
		}
	}
	for (int j = 1; j <= b; j++)
	{
		ans=max(dp[a][j],ans);
	}
	cout<<ans<<'\n';
	return 0;
}