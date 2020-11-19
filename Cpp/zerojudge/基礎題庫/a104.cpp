#include<bits/stdc++.h>
using namespace std;
void quicksort (int a,int b,int c[])
{
	if(a>b) return;
	int d=c[a],i=a,j=b,t;
	while(i!=j)
	{
		while(d<=c[j]&&i<j) j--;
		while(d>=c[i]&&i<j) i++;
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
main()
{
	int a,c[1000];
	while(cin>>a)
	{
		for(int b=0; b<a; b++)
		{
			cin>>c[b];
		}
		quicksort (0,a-1,c);
		for(int b=0; b<a; b++)
		{
			cout<<c[b]<<' ';
		}
		cout<<endl;
	}
}