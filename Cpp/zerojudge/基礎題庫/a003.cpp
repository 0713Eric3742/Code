#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,ans;
	while(cin>>a>>b)
	{
		ans=(a*2+b)%3;
		switch(ans)
		{
			case 0: cout<<"普通"<<endl; break;
			case 1: cout<<"吉"<<endl; break;
			case 2: cout<<"大吉"<<endl; break;
		}
	}
}