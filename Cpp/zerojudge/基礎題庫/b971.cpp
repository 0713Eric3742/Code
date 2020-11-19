#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<a<<' ';
        while(a!=b)
        {
            a+=c;
            cout<<a<<' ';
        }
        cout<<endl;
    }
}