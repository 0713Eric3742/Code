#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,ans;
	while(cin>>a)
	{
		ans=0;
		for(int c=0; c<a; c++)
		{
			cin>>b;
			ans+=b;
		}
		ans/=a;
		if(ans>59) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
}