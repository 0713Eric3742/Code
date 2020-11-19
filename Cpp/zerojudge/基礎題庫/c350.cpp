#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    while (cin>>a>>b>>c)
    {
        d=a;
        while (a>=b)
        {
            a-=b;
            a+=c;
            d+=c;
        }
        cout<<d<<endl;
    }
    return 0;
}