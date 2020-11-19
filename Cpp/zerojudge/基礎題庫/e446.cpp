#include<bits/stdc++.h>
using namespace std;
int a[11]={},book[11]={},r;
void dfs(int step)
{
	if(step>r)
	{
		for(int i=1; i<=r; i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<'\n';
		return ;
	}
	for(int i=1; i<=r; i++)
	{
		if(book[i]==0)
		{
			book[i]=1;
			a[step]=i;
			dfs(step+1);
			book[i]=0;
		}
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin>>r;
	dfs(1);
}