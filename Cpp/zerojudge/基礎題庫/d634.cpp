#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string b[100005],t;
    while (cin>>a)
    {
        t="\n";
        getline(cin,t);
        for (int i = 0; i < a; i++)
        {
            getline(cin,b[i]);
        }
        sort(b,b+a);
        for (int i = 0; i < a; i++)
        {
            cout<<b[i]<<endl;
        }
    }
    return 0;
}