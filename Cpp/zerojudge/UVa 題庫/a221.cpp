#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,time=1;
	cin>>a;
	string t,s1,s2,ans1,ans2;
	t="\n";
	getline(cin,t);
	for(int i=0; i<a; i++)
	{
		getline(cin,s1);
		getline(cin,s2);
		ans1.clear();
		ans2.clear();
		for (int j = 0; j < s1.length(); j++)
		{
			if(s1[j]!=' ') ans1+=s1[j];
		}
		for (int j = 0; j < s2.length(); j++)
		{
			if(s2[j]!=' ') ans2+=s2[j];
		}
		cout<<"Case "<<time++<<": ";
		if(s1==s2) cout<<"Yes"<<endl;
		else if(ans1==ans2) cout<<"Output Format Error"<<endl;
		else cout<<"Wrong Answer"<<endl;
	}
	return 0;
}