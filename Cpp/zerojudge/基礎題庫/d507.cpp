#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d[3];
    while(cin>>d[0]>>d[1]>>d[2])
    {
        sort(d,d+3);
        a=d[0];
        b=d[1];
        c=d[2];
        if(a*a+b*b==c*c) cout<<"right triangle"<<endl;
        if(a*a+b*b>c*c) cout<<"acute triangle"<<endl;
        if(a*a+b*b<c*c) cout<<"obtuse triangle"<<endl;
    }
    return 0;
}