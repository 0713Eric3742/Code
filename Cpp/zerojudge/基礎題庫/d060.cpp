#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    while (cin>>a)
    {
        if(a>25) cout<<85-a<<endl;
        else cout<<25-a;
    }
    return 0;
}