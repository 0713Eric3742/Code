#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c[44],n,f=0;
    c[0]=1,c[1]=1;
    for (int i = 2; i < 44; i++)
    {
        c[i]=c[i-1]+c[i-2];
        //cout<<i<<' '<<c[i]<<endl;
    }
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        cin>>a;
        f=0;
        cout<<a<<" = ";
        a+=1;
        for (int i = 43; i >= 1; i--)
        {
            if(a>c[i])
            {
                cout<<1;
                a-=c[i];
                f=1;
            }
            else if(f==1) cout<<0;
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}