#include<bits/stdc++.h>
using namespace std;
long long int d[250001],c[250001];
void quicksort(int s,int e)
{
	if(s>e) return ;
	int i=s,j=e,t;
	while(i!=j)
	{
		while(c[j]>=c[s]&&i<j) j--;
		while(c[i]<=c[s]&&i<j) i++;
		swap(c[i],c[j]);
		swap(d[i],d[j]);
	}
	swap(c[i],c[s]);
	swap(d[i],d[s]);
	quicksort(s,i-1);
	quicksort(i+1,e);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int a,b,all,ans,f;
	cin>>a;
	c[0]=0,d[0]=0;
	for (int i = 0; i < a; i++)
	{
		f=0;
		cin>>b;
		all=0;
		ans=LONG_LONG_MAX;
		for(int i = 1; i <= b; i++)
		{
			cin>>c[i];
		}
		for (int i = 1; i <= b; i++)
		{
			cin>>d[i];
			all+=d[i];
		}
		quicksort(1,b);
		/*for (int i = 0; i <= b; i++)
		{
			cout<<c[i]<<' '<<d[i]<<endl;
		}*/
		for (int i = 0; i <= b; i++)
		{
			//cout<<c[i] <<' '<<all<<endl;
			all-=d[i];
			if(ans<=max(c[i],all))
			{
				cout<<ans<<'\n';
				f=1;
				break;
			}
			else
			{
				ans=max(c[i],all);
			}
		}
		if (f==0) cout<<c[b]<<'\n';
	}
	return 0;
}