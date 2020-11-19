#include<bits/stdc++.h>
using namespace std;
main()
{
	int a[100][100]={},d,e;
	while(cin>>d>>e)
	{
		for(int b=0; b<d; b++)
		{
			for(int c=0; c<e; c++)
			{
				cin>>a[b][c];
			}
		}
		for(int b=0; b<e; b++)
		{
			for(int c=0; c<d; c++)
			{
				cout<<a[c][b]<<' ';
			}
			cout<<endl;
		}
	}
}