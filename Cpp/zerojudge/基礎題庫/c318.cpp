#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c[1000]={},d[1000]={},max,ans,t;
    while (cin>>a>>b)
    {
        ans=0;
        for (int i = 0; i < a; i++)
        {
            cin>>c[i]>>d[i];
        }
        for (int i = 0; i < b; i++)
        {
            max=0;
            t=0;
            for (int j = 0; j < a; j++)
            {
                if(c[j]>max)
                {
                    max=c[j];
                    t=j;
                }
            }
            ans+=c[t];
            c[t]-=d[t];
        }
        cout<<ans<<endl;
    }
    return 0;
}