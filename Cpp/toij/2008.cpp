#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    int b[10000]={},c[10000]={},d[10000]={},e[10000]={},t,ma=0;
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < a; i++)
    {
        t=i-1;
        while(((b[i]>b[t]&&c[i]>=c[t])||(b[i]>=b[t]&&c[i]>c[t]))&&0<=t&&t<a)
        {
            if(d[t]!=0)
            {
                cout<<i<<' '<<t<<endl;
                t-=d[t];
            }
            t--;
        }
        d[i]=i-t-1;
        //cout<<i<<' '<<d[i]<<endl;
    }
    for (int i = a - 1; i >= 0; i--)
    {
        t=i+1;
        while(((b[i]>b[t]&&c[i]>=c[t])||(b[i]>=b[t]&&c[i]>c[t]))&&0<=t&&t<a)
        {
            if(e[t]!=0)
            {
                t+=e[t];
            }
            t++;
        }
        e[i]=t-i-1;
        //cout<<i<<' '<<e[i]<<endl;
    }
    for (int i = 0; i < a; i++)
    {
        //cout<<i<<' '<<d[i]+e[i]<<endl;
    }
    return 0;
}