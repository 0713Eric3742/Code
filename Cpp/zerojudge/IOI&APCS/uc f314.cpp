#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c[51][10001],d[51],f[51],t,ans=-99999999;

    cin>>a>>b;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cin>>c[i][j];
        }
        d[i]=-99999999;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            if(j==0) f[j]=0;
            else f[j]=c[i][j]+f[j-1];
            //cout<<f[j]<<' ';
        }
        //cout<<endl;
        if(i==1)
        {
            for (int j = 1; j <= b; j++)
            {
                for (int k = 1; k <= b; k++)
                {
                    if(j<=k) t=f[k]-f[j-1];
                    else t=f[j]-f[k-1];
                    d[i]=max(d[i],t);
                }
                //cout<<d[i][j]<<' ';
            }
            //cout<<endl;
        }
        else
        {
            for (int j = 1; j <= b; j++)
            {
                for (int k = 1; k <= b; k++)
                {
                    if(j<=k) t=f[k]-f[j-1];
                    else t=f[j]-f[k-1];
                    d[i]=max(d[i],t+d[i-1]);
                }
                //cout<<d[i][j]<<' ';
            }
            //cout<<endl;
        }
    }
    for (int i = 0; i < b; i++)
    {
        ans=max(d[i],ans);
    }
    cout<<ans<<endl;
    return 0;
}