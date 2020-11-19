#include<bits/stdc++.h>
using namespace std;
main()
{
    string a;
    while (getline(cin,a))
    {
        for (int i = 0; i<a.length();i++)
        {
            if(a[i]!=' ') cout<<a[i];
            else cout<<'\n';
        }
    }
}