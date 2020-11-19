#include<bits/stdc++.h>
using namespace std;
bool prime(int l)
{
	int c=sqrt(l);
	if(l==1) return false;
	for(int b=2; b<=c; b++)
	{
		if(l%b==0) return false;
	}
	return true;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a,ans,c;
	while(cin>>a)
	{
		ans=0;
		if(prime (a))
		{
			cout<<a<<endl;
			continue;
		}
		c=sqrt(a);
		for(int b=2; b<=a; b++)
		{
			while(a%b==0)
			{
				if(prime(b)) ans+=b;
				a/=b;
			}
		}
		cout<<ans<<endl;
	}
}
