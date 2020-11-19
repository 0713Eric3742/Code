#include<bits/stdc++.h>
using namespace std;
main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a,ans;
	while(cin>>a&&a!=0)
	{
		ans=0;
		while(a%2==1)
		{
			ans++;
			a/=2;
		}
		cout<<ans<<'\n';
	}
}
