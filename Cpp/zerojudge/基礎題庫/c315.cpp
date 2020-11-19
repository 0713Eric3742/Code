#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y,a,t,v;
    while (cin>>a)
    {
        x=0,y=0;
        for (int i = 0; i < a; i++)
        {
            cin>>t>>v;
            if(t==0) y+=v;
            if(t==1) x+=v;
            if(t==2) y-=v;
            if(t==3) x-=v;
        }
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}