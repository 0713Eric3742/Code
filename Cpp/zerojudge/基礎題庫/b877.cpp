#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a<=b) cout<<b-a<<endl;
        else cout<<b+100-a<<endl;
    }
}