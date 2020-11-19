#include<iostream>
using namespace std;
int main()
{
	struct queue
	{
		int start;
		int end;
		char data[1000];
	};
	struct queue c;
	string a;
	while(getline(cin,a))
	{
		c.start=0;
		c.end=0;
		for(int b=0; b<a.length(); b++)
		{
			if(a[b]=='('||a[b]=='['||a[b]=='{')
			{
				c.data[c.end++]=a[b];
			}
			else
			{
				if(a[b]==')'&&c.data[c.end-1]=='(')
				{
					c.end--;
				}
				if(a[b]==']'&&c.data[c.end-1]=='[')
				{
					c.end--;
				}
				if(a[b]=='}'&&c.data[c.end-1]=='{')
				{
					c.end--;
				}
			}
		}
		if(c.end==0) cout<<'Y'<<endl;
		else cout<<'N'<<endl;
	}
}
