#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int sum1,sum2,w1=0,w2=0,t;
	for (int i = 0; i < 2; i++)
	{
		sum1=0,sum2=0;
		for (int i = 0; i < 4; i++)
		{
			cin>>t;
			sum1+=t;
		}
		for (int i = 0; i < 4; i++)
		{
			cin>>t;
			sum2+=t;
		}
		cout<<sum1<<':'<<sum2<<endl;
		if(sum1>sum2) w1++;
		else w2++;
	}
	if(w1==2) cout<<"Win"<<endl;
	if(w1==1) cout<<"Tie"<<endl;
	if(w1==0) cout<<"Lose"<<endl;
	return 0;
}