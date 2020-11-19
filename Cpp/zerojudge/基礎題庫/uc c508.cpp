#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b[10000]={};
    while (cin>>a)
    {
        for (int i = 0; i < a; i++)
        {
            cin>>b[i];
        }
        sort(b,b+a);
        for (int i = 0; i < a; i++)
        {
            cout<<b[i]<<' ';
        }
        cout<<endl;
        for (int i = 0; i < a; i++)
        {
            if(b[i]==b[i+1]) b[i]=-1;
        }
        for (int i = a-1; i >= 0; i--)
        {
            if(b[i]!=-1) cout<<b[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}