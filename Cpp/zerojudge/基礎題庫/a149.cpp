#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int ans,b;
	while(cin>>b)
	{
		for(int d=0; d<b; d++)
		{
			cin>>a;
			ans=1;
			for(int c=0; c<a.length(); c++)
			{
				ans*=(a[c]-'0');
			}
			cout<<ans<<endl;
		}
	}
}