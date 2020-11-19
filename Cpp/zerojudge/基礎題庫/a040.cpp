#include<bits/stdc++.h>
using namespace std;
bool isarmstrong(int a)
{
	int t=a,l=0,ans=0;
	while(t>0)
	{
		t/=10;
		l++;
	}
	t=a;
	for(int c=0; c<l; c++)
	{
		ans+=pow(t%10,l);
		t/=10;
	}
	if(ans==a) return true;
	else return false;
}
main()
{
	int a,b,n;
	while (cin>>a>>b)
	{
		n=0;
		for(int c=a; c<=b; c++)
		{
			if(isarmstrong(c))
			{
				cout<<c<<' ';
				n++;
			}
		}
		if(n==0) cout<<"none";
		cout<<endl;
	}
}