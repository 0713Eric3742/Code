#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10005],b[10005]={},c;
	a[1]=1,a[2]=4;
	for (int i = 3; i <= 10000; i++)
	{
		a[i]=a[i-1]*3;
	}
	for (int i = 1; i <= 10000; i++)
	{
		b[i]=b[i-1]+a[i];
	}
	while(cin>>c)
	{
		cout<<b[c]<<endl;
	}
}