#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t;
    while(cin>>a>>b)
    {
        t=1;
        if(b==0)
        {
            cout<<"Go Kevin!!"<<endl;
            continue;
        }
        while (a>0)
        {
            a-=t;
            t+=b;
        }
        if(a==0)
            cout<<"Go Kevin!!"<<endl;
        else
            cout<<"No Stop!!"<<endl;
    }
}