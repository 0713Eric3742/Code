#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,h1,m1,h2,m2,t;
    while(cin>>a)
    {
        for(int b=0; b<a; b++)
        {
            cin>>h1>>m1>>h2>>m2>>t;
            if((h2-h1)*60+m2-m1>=t)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}