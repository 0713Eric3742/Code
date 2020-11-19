#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (cin>>a&&a!=0)
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = a-i-1; j >= 0; j--)
            {
                cout<<'_';
            }
            for (int j = 0; j < i; j++)
            {
                cout<<'+';
            }
            cout<<endl;
        }
    }
    return 0;
}