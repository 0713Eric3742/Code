#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int a,c,d,t,ans;
    while(cin>>a)
    {
        int b[a+5]={},e[a+5]={};
        ans=0;
        for (int i = 1; i <= a; i++)
        {
            cin>>c;
            for (int j = 0; j < c; j++)
            {
                cin>>d;
                b[d]=i;
            }
        }
        for (int i = 1; i <= a; i++)
        {
            if(b[i]==0)
            {
                cout<<i<<endl;
            }
            e[b[i]]=1;
        }
        for (int i = 1; i <= a; i++)
        {
            if(e[i]==0)
            {
                t=i;
                while(b[t]!=0)
                {
                    e[b[t]]=max(e[b[t]],e[t]+1);
                    t=b[t];
                }
            }
        }
        for (int i = 1; i <= a; i++)
        {
            ans+=e[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}