#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c,d;
	vector <int> ans;
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		ans.clear();
		cin>>b>>c>>d;
		for (int j = b+1; j < c; j++)
		{
			if(j%d!=0) ans.push_back(j);
			//cout<<j<<endl;
		}
		for (int j = 0; j < ans.size(); j++)
		{
			cout<<ans[j]<<' ';
		}
		if(ans.size()==0) cout<<"No free parking spaces.";
		cout<<endl;
	}
	return 0;
}