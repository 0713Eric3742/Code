#include<bits/stdc++.h>
using namespace std;
main()
{
	string a;
	int ans,d[26]={1,0,9,8,7,6,5,4,9,3,2,2,1,0,8,9,8,7,6,5,4,3,1,3,2,0};
	while(cin>>a)
	{
		ans=a[8]-'0';
		for(int b=0; b<8; b++)
		{
			ans+=(a[b]-'0')*(8-b);
		}
		for(int b=0; b<26; b++)
		{
			if((ans+d[b])%10==0) cout<<(char)(b+'A');
		}
		cout<<endl;
	}
}