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
	int a;
	while(cin>>a)
	{
		if(prime(a)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}