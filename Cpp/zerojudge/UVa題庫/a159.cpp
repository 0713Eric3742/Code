#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a,ans=0;
	cin>>a;
	string t,s;
	for(int i=0; i<a; i++)
	{
		ans=0;
		s.clear();
		for (int j = 0; j < 4; j++)
		{
			cin>>t;
			s+=t;
		}
		for (int j = 0; j < s.length(); j+=2)
		{
			if((s[j]-'0')*2>=10) ans+=1+(((s[j]-'0')*2)%10);
			else ans+=((s[j]-'0')*2);
			//cout<<((s[i]-'0')*2)<<endl;
		}
		for (int j = 1; j < s.length(); j+=2)
		{
			ans+=(s[j]-'0');
		}
		if(ans%10==0) cout<<"Valid"<<'\n';
		else cout<<"Invalid"<<'\n';
	}
	return 0;
}