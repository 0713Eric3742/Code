#include<bits/stdc++.h>
using namespace std;
main()
{
	string a;
	while(cin>>a)
	{
		for(int b=0; b<a.length()-1; b++)
		{
			if(a[b]-a[b+1]>0) cout<<a[b]-a[b+1]; 
			else cout<<a[b+1]-a[b]; 
		}
		cout<<endl;
	}
}