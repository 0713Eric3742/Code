#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,ans;
    while (cin>>a)
    {
        ans=0;
        for(int b=1; b<=a; b++)
        {
            cin>>c;
            ans+=c*b;
        }
        cout<<ans<<endl;
    }
}