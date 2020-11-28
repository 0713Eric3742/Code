#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int b=0,c=0;
	string a;
	cin>>a;
	for (int i = 0; i < a.length(); i++)
	{
		if(i%2==0) b+=a[i]-'0';
		if(i%2==1) c+=a[i]-'0';
	}
	cout<<abs(b-c)<<endl;
	return 0;
}