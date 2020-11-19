#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while (cin>>a)
    {
        for (int i = 1; i < a.length()-1; i++)
        {
            a[i]='_';
        }
        cout<<a<<endl;
    }
    return 0;
}