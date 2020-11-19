#include<bits/stdc++.h>
using namespace std;
void quicksort(int s,int e,int a[],int b[])
{
	if(s>e)
	{
		return ;
	}
	int p=a[s],i=s,j=e,t;
	while(i!=j)
	{
		while(a[j]>=a[s]&&i<j) j--;
		while(a[i]<=a[s]&&i<j) i++;
		t=a[j];
		a[j]=a[i];
		a[i]=t;
		t=b[j];
		b[j]=b[i];
		b[i]=t;
	}
	t=a[s];
	a[s]=a[i];
	a[i]=t;
	t=b[s];
	b[s]=b[i];
	b[i]=t;
	quicksort(s,i-1,a,b);
	quicksort(i+1,e,a,b);
}
main()
{
	int a;
	int b[1000],d[1000];
	cin>>a;
	for(int c=0; c<a; c++)
	{
		cin>>b[c]>>d[c];
	}
	quicksort(0,a-1,b,d);
	for(int c=0; c<a; c++)
	{
		int t=0;
		while(b[c]==b[c+1])
		{
			t++;
			c++;
		}
		quicksort(c-t,c,d,b);
	}
	for(int c=0; c<a; c++)
	{
		cout<<b[c]<<' '<<d[c]<<endl;
	}
}
