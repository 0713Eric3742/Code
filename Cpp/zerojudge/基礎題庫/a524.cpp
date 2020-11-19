#include<bits/stdc++.h>
using namespace std;
int d[100],book[100]={};
void dfs(int a,int b)
{
	if(a>b)
	{
		for(int c=0; c<b; c++)
		{
			cout<<d[c];
		}
		cout<<endl;
		return;
	}
	for(int c=b; c>0; c--)
	{
		if(book[c]==0)
		{
			d[a-1]=c;
			book[c]=1;
			dfs(a+1,b);
			book[c]=0;
		}
	}
	return;
}
main()
{
	int a;
	while(cin>>a)
	{
		dfs(1,a);
	}
}
