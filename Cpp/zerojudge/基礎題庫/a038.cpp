#include<bits/stdc++.h>
using namespace std;
main()
{
	string a;
	int t;
	while (cin>>a)
	{
		reverse(&a[0],&a[a.length()]);
		t=0;
		while(a[t]=='0'&&a.length()-t>1)
		{
			t++;
		}
		for(int b=t; b<a.length(); b++)
		{
			cout<<a[b];
		}
		cout<<endl;
	}
}