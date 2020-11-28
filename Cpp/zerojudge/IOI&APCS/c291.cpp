#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b[100005],t,ans=0;
	bool c[100005];
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		cin>>b[i];
	}
	for (int i = 0; i < a; i++)
	{
		c[i]=false;
	}
	for (int i = 0; i < a; i++)
	{
		t=b[i];
		if(!c[i]) ans++;
		while(!c[t])
		{
			c[t]=true;
			t=b[t];
		}
	}
	cout<<ans<<endl;
	return 0;
}