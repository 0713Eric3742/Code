#include<bits/stdc++.h>
using namespace std;
int add(int a)
{
    int ans=0;
    for(int b=1; b<a; b++)
    {
        if (a%b==0) ans+=b;
    }
    return ans;
}
main()
{
    int a;
    while(cin>>a&&a!=0)
    {
        if(a==add(a)) cout<<"="<<a<<endl;
        else if(a==add(add(a))) cout<<add(a)<<endl;
        else cout<<0<<endl;
    }
}