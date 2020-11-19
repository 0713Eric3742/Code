#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,ans;
    while(cin>>a>>b)
    {
        ans=0;
        for (int i = a; i <= b; i++)
        {
            if(i%2==0) ans+=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}