#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b[200005]={},t,c,h,temp;
    while (cin>>a)
    {
        for (int i = 1; i <= a; i++)
        {
            cin>>temp;
            if(i==1) b[i]=temp;
            else b[i]=b[i-1]+temp;
        }
        cin>>c;
        for (int i = 0; i < c; i++)
        {
            cin>>h>>t;
            cout<<b[t]-b[h-1]<<endl;
        }
    }
    return 0;
}