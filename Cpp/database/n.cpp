#include<bits/stdc++.h>
using namespace std;
int dp[300000][60],b[300000],c[300000];
int main()
{
	int a,range;
	cin>>a;
	for (int i = 1; i <= a; i++)
	{
		cin>>b[i];
	}
	for (int i = 1; i <= a; i++)
	{
		cin>>c[i];
	}
	for (int i = 0; i <= 59; i++)
	{
		if(i==0)
		{
			for (int j = 1; j <= a; j++)
			{
				dp[c[j]][i]=b[j];
				//cout<<b[j]<<' '<<c[j]<<endl;
			}
		}
		else
		{
			for (int j = 1; j <= a; j++)
			{
				dp[c[j]][i]=dp[dp[c[j]][i-1]][i-1];
			}
		}
	}
	for (int j = 1; j <= a; j++)
	{
		cout<<dp[j][0]<<' ';
	}
	cout<<endl;
	for (int j = 1; j <= a; j++)
	{
		cout<<dp[j][1]<<' ';
	}
	cout<<endl;
	for (int j = 1; j <= a; j++)
	{
		cout<<dp[j][2]<<' ';
	}
	cout<<endl;
}