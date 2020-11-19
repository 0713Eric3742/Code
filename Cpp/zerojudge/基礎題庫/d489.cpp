#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,s;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        cout<<s*(s-a)*(s-b)*(s-c)<<endl;
    }
    return 0;
}