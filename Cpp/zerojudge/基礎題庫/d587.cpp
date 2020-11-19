#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,b[4];
    while (cin>>a)
    {
        for (int i = 0; i < 4; i++)
        {
            b[i]=0;
        }
        for (int i = 0; i < a; i++)
        {
            cin>>t;
            b[t]++;
        }
        for (int i = 1; i < 4; i++)
        {
            for (int j = 0; j < b[i]; j++)
            {
                cout<<i<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}