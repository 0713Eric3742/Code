#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double a,b,c;
	ostringstream ans;
	string s;
	while(cin>>a>>b>>c)
	{
		ans.str("");
		ans.clear();
		ans<<fixed<<setprecision(c+1)<<a/b;
		s=ans.str();
		for (int i = 0; i < s.length()-1; i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}