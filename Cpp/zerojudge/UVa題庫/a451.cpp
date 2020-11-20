#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int a,b,dp[2][2][32],dp2[32],ans[2][2]={{0,1},{1,1}},t[2][2],cnt;
	while(cin>>a>>b)
	{
		cnt=0;
		ans[0][0]=0,ans[0][1]=1,ans[1][0]=1,ans[1][1]=1;
		t[0][0]=0,t[0][1]=1,t[1][0]=1,t[1][1]=1;
		dp[0][0][0]=0,dp[0][1][0]=1,dp[1][0][0]=1,dp[1][1][0]=1,dp2[0]=1;
		for (int i = 1; i <= 31; i++)
		{
			dp2[i]=dp2[i-1]*2;
		}
		for (int i = 1; i <= 31; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 2; k++)
				{
					dp[j][k][i]=((dp[j][0][i-1]*dp[0][k][i-1])%dp2[b]+(dp[j][1][i-1]*dp[1][k][i-1])%dp2[b])%dp2[b];
				}
			}
		}
		while(a>0)
		{
			if(a%2==1)
			{
				for (int j = 0; j < 2; j++)
				{
					for (int k = 0; k < 2; k++)
					{
						ans[j][k]=((t[j][0]*dp[0][k][cnt])%dp2[b]+(t[j][1]*dp[1][k][cnt])%dp2[b])%dp2[b];
					}
				}
			}
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 2; k++)
				{
					t[j][k]=ans[j][k];
				}
			}
			a/=2;
			cnt++;
		}
		cout<<ans[0][0]<<endl;
	}
	return 0;
}