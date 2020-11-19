#include<bits/stdc++.h>
using namespace std;
main()
{
	string a;
	int ans;
	while(cin>>a)
	{
		ans=a[9]-'0';
		for(int b=1; b<9; b++)
		{
			ans+=(a[b]-'0')*(9-b);
		}
		if('A'<=a[0]&&a[0]<='H') ans+=((a[0]-'A'+10)/10)+((a[0]-'A'+10)%10*9);
		if('I'==a[0]) ans+=((34)/10)+((34)%10*9);
		if('J'<=a[0]&&a[0]<='N') ans+=((a[0]-'A'+9)/10)+((a[0]-'A'+9)%10*9);
		if('O'==a[0]) ans+=((35)/10)+((35)%10*9);
		if('P'<=a[0]&&a[0]<='V') ans+=((a[0]-'A'+8)/10)+((a[0]-'A'+8)%10*9);
		if('W'==a[0]) ans+=((32)/10)+((32)%10*9);
		if('X'<=a[0]&&a[0]<='Y') ans+=((a[0]-'A'+7)/10)+((a[0]-'A'+7)%10*9);
		if('Z'==a[0]) ans+=((33)/10)+((33)%10*9);
		if(ans%10==0) cout<<"real"<<endl;
		else cout<<"fake"<<endl;
	}
}