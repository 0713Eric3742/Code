#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,t,m;
    while (cin>>a)
    {
        m=0;
        for (int i = 0; i < a; i++)
        {
            cin>>t;
            m=max(m,t);
        }
        cout<<m<<endl;
    }
    return 0;
}