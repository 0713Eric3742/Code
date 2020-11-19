#include<bits/stdc++.h>
using namespace std;
void quicksort (int a,int b,int c[])
{
	if(a>b) return;
	int d=c[a]%10,i=a,j=b,t;
	while(i!=j)
	{
		while(d<=c[j]%10&&i<j) j--;
		while(d>=c[i]%10&&i<j) i++;
		if(i<j)
		{
			t=c[i];
			c[i]=c[j];
			c[j]=t;
		}
	}
	t=c[i];
	c[i]=c[a];
	c[a]=t;
	quicksort (a,i-1,c);
	quicksort (i+1,b,c);
}
void quicksort2 (int a,int b,int c[])
{
	if(a>b) return;
	int d=c[a]/10,i=a,j=b,t;
	while(i!=j)
	{
		while(d>=c[j]/10&&i<j) j--;
		while(d<=c[i]/10&&i<j) i++;
		if(i<j)
		{
			t=c[i];
			c[i]=c[j];
			c[j]=t;
		}
	}
	t=c[i];
	c[i]=c[a];
	c[a]=t;
	quicksort2 (a,i-1,c);
	quicksort2 (i+1,b,c);
}
main()
{
	int a;
	while(cin>>a)
	{
		int c[1000]={};
		for(int b=0; b<a; b++)
		{
			cin>>c[b];
		}
		quicksort (0,a-1,c);
		for(int b=0; b<a; b++)
		{
			int t=0;
			while(c[b]%10==c[b+1]%10)
			{
				t++;
				b++;
			}
			if(t>0) quicksort2 (b-t,b,c);
		}
		for(int b=0; b<a; b++)
		{
			cout<<c[b]<<' ';
		}
		cout<<endl;
	}
}
