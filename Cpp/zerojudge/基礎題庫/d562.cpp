#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b[1000],t;
    while (cin>>a)
    {
        t=a;
        for (int i = 0; i < a; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < t; j++)
            {
                cout<<b[j]<<' ';
            }
            cout<<endl;
            reverse(b,b+t);
            t--;
        }
        cout<<endl;
    }
    return 0;
}