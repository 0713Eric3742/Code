#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,ans;
	string s,str,t;
	vector<string> f;
	cin>>a;
	str +='\n';
	getline(cin,str);
	for(int i=0; i<a; i++)
	{
		ans=0;
		f.clear();
		getline(cin,s);
		for(int j=0; j<s.length(); j++)
		{
			t.clear();
			while('0'<=s[j]&&s[j]<='9')
			{
				t+=s[j];
				j++;
			}
			if(!t.empty()) f.push_back(t);
		}
		for(int j=0; j<f.size(); j++)
		{
			for(int k=j+1; k<f.size(); k++)
			{
				ans=max(ans,__gcd(stoi(f[k]),stoi(f[j])));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}