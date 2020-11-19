#include<bits/stdc++.h>
using namespace std;
bool prime(int l)
{
	int c=sqrt(l);
	if(l==1) return false;
	for(int b=2; b<=c; b++)
	{
		if(l%b==0) return false;
	}
	return true;
}
int main()
{
	int a,d[100],t,s;
	while(cin>>a)
	{
		t=0;
		for(int b=2; b<=a; b++)
		{
			while(a%b==0)
			{
				if(prime(b)) d[t]=b;
				a/=b;
				t++;
			}
		}
		for(int b=0; b<t; b++)
		{
			s=1;
			while(d[b]==d[b+1])
			{
				s++;
				b++;
			}
			if(s!=1) cout<<d[b]<<"^"<<s;
			else cout<<d[b];
			if(t-1 != b) cout<<" * ";
		}
		cout<<endl;
	}
}