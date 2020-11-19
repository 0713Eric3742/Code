#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,f,i[2][2]={{0,0},{0,1}},j[2][2]={{0,1},{1,1}},k[2][2]={{0,1},{1,0}};
    while(cin>>a>>b>>c)
    {
        f=0;
        if(a!=0) a=1;
        if(b!=0) b=1;
        if(i[a][b]==c) cout<<"AND"<<endl,f=1;
        if(j[a][b]==c) cout<<"OR"<<endl,f=1;
        if(k[a][b]==c) cout<<"XOR"<<endl,f=1;
        if(f==0) cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}