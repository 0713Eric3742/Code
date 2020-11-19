#include<bits/stdc++.h>
using namespace std;
void quicksort(vector<int> &a,int s,int e)
{
	if(s>e) return ;
	int i=s,j=e,t;
	while(i!=j)
	{
		while(a[j]>=a[s]&&i<j) j--;
		while(a[i]<=a[s]&&i<j) i++;
		swap(a[i],a[j]);
	}
	swap(a[i],a[s]);
	quicksort(a,s,i-1);
	quicksort(a,i+1,e);
}
int binarySearch(vector<int> &number,int find,int s,int e)
{
	int low = s,upper = e;
	while(low <= upper)
	{
		int mid = (low+upper) / 2;
		if(number[mid] < find) low = mid+1;
		else if(number[mid] > find) upper = mid-1;
		else return mid;
	}
	return -1;
}
int main()
{
	int a;
	vector<int> b(1000);
	cin>>a;
	for(int c=0; c<a; c++)
	{
		cin>>b[c];
	}
	quicksort(b,0,a-1);
	for(int c=0; c<a; c++)
	{
		cout<<b[c]<<' ';
	}
	cout<<binarySearch(b,66,0,a-1)<<endl;
}