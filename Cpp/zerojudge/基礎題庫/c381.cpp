#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,t;
    string c,d;
    while(cin>>a>>b&&a!=0&&b!=0)
    {
        d.clear();
        for (int i = 0; i < a; i++)
        {
            cin>>c;
            d+=c;
        }
        for (int i = 0; i < b; i++)
        {
            cin>>t;
            cout<<d[t-1];
        }
        cout<<endl;
    }
    return 0;
}