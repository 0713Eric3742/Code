#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,t;
	cin>>t;
	for(int e=0; e<t; e++)
	{
		cin>>a>>b>>c>>d;
		if(b/a==d/c)
		{
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<d*b/a<<endl;
		}
		else
		cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<d+b-a<<endl;
	}
}