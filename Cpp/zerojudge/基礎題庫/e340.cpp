#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b[200005],t,l;
    while (cin>>a)
    {
        l=0;
        for (int i = 0; i < a; i++)
        {
            cin>>t;
            if(i==0) b[i]=t;
            else b[i]=t-l;
            l=t;
        }
        for (int i = 0; i < a; i++)
        {
            cout<<b[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}