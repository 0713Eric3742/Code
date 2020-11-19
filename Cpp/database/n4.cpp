#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f,ans[101],h=0;
	ans[h++]=4;
	for (int i = 6; i < 401; i+=2)
	{
		f=0;
		for (int j = 0; j < h; j++)
		{
			if(i%j==0)
			{
				f=1;
			}
		}
		if(f==1) continue;
		else ans[h++]=4;
	}
	int a,b;
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		cin>>b;
		for (int j = 0; j < b; j++)
		{
			cout<<ans[j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}