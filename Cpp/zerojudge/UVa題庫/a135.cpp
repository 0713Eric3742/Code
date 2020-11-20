#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a,b[7]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    string c[7]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
    int d=0,f;
    while(cin>>a&&a!="#")
    {
        cout<<"Case "<<++d<<": ";
        f=0;
        for (int i = 0; i < 6; i++)
        {
            if(a==b[i])
            {
                cout<<c[i]<<endl;
                f=1;
            }
        }
        if(f==0) cout<<"UNKNOWN"<<endl;
    }
    return 0;
}