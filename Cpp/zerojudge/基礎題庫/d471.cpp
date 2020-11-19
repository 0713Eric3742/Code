#include<iostream>
using namespace std;
int a[100]={},range;
void dfs(int step)
{
	if(step==range+1)
	{
		for(int i=0; i<range; i++)
		{
			cout<<a[i];
		}
		cout<<'\n';
		return;
	}
	a[step-1]=0;
	dfs(step+1);
	a[step-1]=1;
	dfs(step+1);
	return;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	while(cin>>range)
	{
		dfs(1);
	}
}