#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c,d;
	while(cin>>a)
	{
		for(int e=0; e<a; e++)
		{
			cin>>b>>c>>d;
			switch(b)
			{
				case 1:cout<<c+d<<endl; break;
				case 2:cout<<c-d<<endl; break;
				case 3:cout<<c*d<<endl; break;
				case 4:cout<<c/d<<endl; break;
			}
		}
	}
}
