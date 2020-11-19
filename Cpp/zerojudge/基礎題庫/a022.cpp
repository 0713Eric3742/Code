#include<bits/stdc++.h>
using namespace std;
main()
{
	string a,b;
	while (cin>>a)
	{
		b=a;
		reverse(&a[0],&a[a.length()]);
		if(a==b) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}