#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0) return b;
	return gcd(b%a,a);
}
main()
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<gcd(a,b)<<endl;
	}
}
