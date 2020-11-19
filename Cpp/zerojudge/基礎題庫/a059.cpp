#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,c,d,ans,t;
	while(cin>>a)
	{
		for(int b=0; b<a; b++)
		{
			ans=0;
			cin>>c>>d;
			c--;
			t=sqrt(c)+1;
			while(pow(t,2)<=d)
			{
				ans+=pow(t,2);
				t++;
			}
			cout<<"Case "<<b+1<<": "<<ans<<endl;
		}
	}
}