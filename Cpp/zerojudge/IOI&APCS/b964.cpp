#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b[100005],minsc=-10,maxsc=110;
	cin>>a;
	for (int i = 0; i < a; i++)
	{
		cin>>b[i];
	}
	sort(b,b+a);
	for (int i = 0; i < a; i++)
	{
		if(b[i]>=60&&maxsc>b[i]) maxsc=b[i];
		if(b[i]<60&&minsc<b[i]) minsc=b[i];
	}
	for (int i = 0; i < a; i++)
	{
		cout<<b[i]<<' ';
	}
	cout<<endl;
	if(minsc!=-10) cout<<minsc<<endl;
	else cout<<"best case"<<endl;
	if(maxsc!=110) cout<<maxsc<<endl;
	else cout<<"worst case"<<endl;
	return 0;
}