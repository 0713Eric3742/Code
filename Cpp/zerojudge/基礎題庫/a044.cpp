#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,ans;
	while (cin>>a)
	{
		ans=1;
		for(int b=1; b<=a; b++)
		{
			ans+=b*(b-1)/2+1;
		}
		cout<<ans<<endl;
	}
}