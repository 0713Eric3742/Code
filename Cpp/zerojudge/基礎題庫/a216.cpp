#include<bits/stdc++.h>
using namespace std;
long long int f(int a)
{
	if(a==1) return 1;
	return a+f(a-1);
}
long long int g(int a)
{
	if(a==1) return 1;
	return g(a-1)+f(a);
}
int main()
{
	int a;
	while(cin>>a)
	{
		cout<<f(a)<<' '<<g(a)<<endl;
	}
}