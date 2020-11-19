#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,ans;
	while (cin>>a)
	{
		if(0<=a&&a<=10) cout<<a*6<<endl;
		if(11<=a&&a<=20) cout<<60+(a-10)*2<<endl;
		if(21<=a&&a<=40) cout<<80+(a-20)<<endl;
		if(a>=41) cout<<100<<endl;
	}
}