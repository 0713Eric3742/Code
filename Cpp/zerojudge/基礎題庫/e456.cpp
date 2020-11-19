#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=1;
    string a;
    getline(cin,a);
    a+=' ';
    for (int i = 0; i < a.length(); i++)
    {
        t=1;
        while(a[i+1]!=' '&&a[i]!=' ')
        {
            i++;
            t++;
        }
        if(a[i]!=' ')
        {
            if(n!=1) cout<<", ";
            for (int j = i-t+1; j <= i; j++)
            {
                cout<<a[j];
            }
            cout<<" little";
            n++;
        }
    }
    cout<<" Indians"<<endl;
}