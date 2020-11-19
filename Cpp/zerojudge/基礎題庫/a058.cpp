#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,c,d[3]={0};
	while(cin>>a)
	{
		for(int b=0; b<3; b++)
		{
			d[b]=0;
		}
		for(int b=0; b<a; b++)
		{
			cin>>c;
			d[c%3]++;
		}
		for(int b=0; b<3; b++)
		{
			cout<<d[b]<<' ';
		}
		cout<<endl;
	}
}