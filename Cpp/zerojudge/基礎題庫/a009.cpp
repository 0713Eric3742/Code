#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		for(int b=0; b<a.length(); b++)
		{
			a[b]-=7;
		}
		cout<<a<<endl;
	}
}