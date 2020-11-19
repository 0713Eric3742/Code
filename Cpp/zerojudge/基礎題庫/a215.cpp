#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,ans,t;
	while(cin>>a>>b)
	{
		ans=0;
		t=0;
		if(b<0)
		{
			cout<<1<<endl;
			continue;
		}
		while(t<=b)
		{
			t+=a;
			a++;
			ans++;
		}
		cout<<ans<<endl;
	}
}