#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b[200005],t;
    while (cin>>a)
    {
        for (int i = 0; i < a; i++)
        {
            cin>>t;
            if(i==0) b[i]=t;
            else b[i]=b[i-1]+t;
        }
        for (int i = 0; i < a; i++)
        {
            cout<<b[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}