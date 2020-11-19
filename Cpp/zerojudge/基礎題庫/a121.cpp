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
	int a,b,ans;
	while(cin>>a>>b)
	{
		ans=0;
		for(int c=a; c<=b; c++)
		{
			if(prime(c)) ans++;
		}
		cout<<ans<<endl;
	}
}