#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b[10005],c,d,t;
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		cin>>b[i];
	}
	cin>>c>>d;
	for (int i = 0; i < d; i++)
	{
		cin>>t;
		for (int i = 0; i < a; i++)
		{
			if(b[i]==t) b[i]=c;
		}
		c=t;
	}
	for (int i = 0; i < a; i++)
	{
		cout<<b[i]<<' ';
	}
	cout<<endl;
}