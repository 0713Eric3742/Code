#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		if(a*e==b*d)
		{
			if(a*f==c*d) cout<<"Too many"<<endl;
			else cout<<"No answer"<<endl;
		}
		else
		{
			cout<<fixed<<setprecision(2)<<"x="<<(c*e-b*f)/(a*e-b*d)<<endl<<"y="<<(a*f-c*d)/(a*e-b*d)<<endl;
		}
	}
}
