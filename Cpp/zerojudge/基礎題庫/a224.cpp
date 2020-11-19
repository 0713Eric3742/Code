#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	bool d[26];
	int c;
	while(cin>>a)
	{
		c=0;
		for(int b=0; b<26; b++)
		{
			d[b]=false;
		}
		for(int b=0; b<a.length(); b++)
		{
			if('a'<=a[b]&&a[b]<='z') d[a[b]-'a'] = !(d[a[b]-'a']);
			if('A'<=a[b]&&a[b]<='Z') d[a[b]-'A'] = !(d[a[b]-'A']);
		}
		for(int b=0; b<26; b++)
		{
			if(d[b]==true) c++;
		}
		if(c==0||c==1) cout<<"yes !"<<endl;
		else cout<<"no..."<<endl;
	}
}
