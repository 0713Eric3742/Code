#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0;
    while(cin>>a>>b)
    {
        ans=0;
        while(b>0)
        {
            while(a>=12)
            {
                b--;
                a-=10;
                ans++;
            }
            b--;
            a++;
        }
        cout<<ans<<endl;
    }
}