#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    int ans=0;
    while(cin>>a)
    {
        ans=0;
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i]-'0'==0) ans++;
            if(a[i]-'6'==0) ans++;
            if(a[i]-'9'==0) ans++;
            if(a[i]-'8'==0) ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}