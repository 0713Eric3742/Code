#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while (cin>>a)
    {
        for(int i=0; i<a.length(); i++)
        {
            cout<<a<<endl;
            for(int j=0; j<a.length()-1; j++)
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}