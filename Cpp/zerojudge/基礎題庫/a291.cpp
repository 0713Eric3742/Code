#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a[4],b[4],c,A,B,book[10],t[4],d;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3])
	{
		cin>>c;
		for(int e=0; e<c; e++)
		{
			A=0;
			B=0;
			for(d=0; d<10; d++)
			{
				book[d]=0;
			}
			for(d=0; d<4; d++)
			{
				t[d]=0;
			}
			cin>>b[0]>>b[1]>>b[2]>>b[3];
			for(d=0; d<4; d++)
			{
				if(a[d]==b[d])
				{
					A++;
					t[d]=1;
				}
				else
				{
					book[a[d]]++;
				}
			}
			for(d=0; d<4; d++)
			{
				if(t[d]==0&&book[b[d]]>0)
				{
					B++;
					book[b[d]]--;
				}
			}
			cout<<A<<'A'<<B<<'B'<<'\n';
		}
	}
}
