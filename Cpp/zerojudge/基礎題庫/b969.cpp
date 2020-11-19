#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int c=0; c<a.length(); c++)
    {
        cout<<b<<", ";
        while(a[c]!=' '&&c<a.length())
        {
            cout<<a[c];
            c++;
        }
        cout<<endl;
    }
}