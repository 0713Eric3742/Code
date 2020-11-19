#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,h,t,q[100005]={};
    h=0,t=0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>b;
        if(b==1)
        {
            cin>>c;
            q[t++]=c;
        }
        if(b==2)
        {
            if(h!=t) cout<<q[h]<<endl;
            else cout<<-1<<endl;
        }
        if(b==3)
        {
            if(h!=t) h++;
        }
    }
}