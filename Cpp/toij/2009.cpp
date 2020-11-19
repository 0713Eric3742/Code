#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,d;
    cin>>a>>d;
    long long int b[10000]={},c[10000]={},ans=0,t,f=0;
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < a-d+1; i++)
    {
        if(b[i]!=c[i])
        {
            t=c[i]-b[i];
            if(t<0) t+=9;
            for (int j = 0; j < d; j++)
            {
                b[i+j]+=t;
                if(b[i+j]>9) b[i+j]-=9;
            }
            ans+=t;
        }
    }
    for (int i = a-d+1; i < a; i++)
    {
        if(b[i]!=c[i]) f=1;
    }
    if(f==0) cout<<ans<<endl;
    else cout<<0<<endl;
    return 0;
}