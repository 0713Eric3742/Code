#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool prime[46350]={};
	prime[0]=true,prime[1]=true;
	vector<int> primelist;
	for (int i = 2; i < 46350; i++)
	{
		if(!prime[i])
		{
			for (int j = i*2; j <= 46350; j+=i)
			{
				prime[j]=true;
			}
			primelist.push_back(i);
			//cout<<i<<' ';
		}
	}
	int a,f=0,ans=0,t;
	cin>>a;
	for (int i = 0; i < primelist.size(); i++)
	{
		while(a%primelist[i]==0)
		{
			a/=primelist[i];
			ans=max(ans,primelist[i]);
		}
	}
	ans=max(ans,a);
	cout<<ans<<endl;
	return 0;
}