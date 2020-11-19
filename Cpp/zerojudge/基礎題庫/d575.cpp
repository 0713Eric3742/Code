#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long int a,b,c,d,e;
    while (cin>>a>>b>>c>>d>>e)
    {
        if(e<abs(c-a)+abs(d-b)) cout<<"alive\n";
        else cout<<"die\n";
    }
    return 0;
}