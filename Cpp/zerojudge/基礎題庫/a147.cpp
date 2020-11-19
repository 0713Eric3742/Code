#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		for(int c=1; c<a; c++)
		{
			if(c%7!=0) cout<<c<<' ';
		}
		cout<<endl;
	}
}