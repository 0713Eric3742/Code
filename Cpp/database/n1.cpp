#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b[200005],c[200005],ans=0;
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		cin>>b[i];
	}
	sort(b,b+a);
	reverse(b,b+a);
	for (int i = 0; i < a; i++)
	{
		if(i==0) c[i]=b[i];
		else c[i]=c[i-1]+b[i];
	}
	for (int i = 1; i < a; i++)
	{
		ans+=c[i-1]-b[i]*i;
	}
	cout<<ans<<endl;
	return 0;
}