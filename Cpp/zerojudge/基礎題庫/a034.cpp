#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b[100]={},n;
	while (cin>>a)
	{
		n=0;
		while(a>0)
		{
			n++;
			b[n]=a%2;
			a/=2;
		}
		for(int c=n; c>0; c--)
		{
			cout<<b[c];
		}
		cout<<'\n';
	}
}