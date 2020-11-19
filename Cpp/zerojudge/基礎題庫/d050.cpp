#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    while (cin>>a)
    {
        a-=15;
        if(a<0) cout<<a+24<<endl;
        else cout<<a<<endl;
    }
    return 0;
}