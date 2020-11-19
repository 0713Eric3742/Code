#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    while (cin>>a>>b>>c)
    {
        cout<<max(a, max(b,c))<<endl;
    }
    return 0;
}