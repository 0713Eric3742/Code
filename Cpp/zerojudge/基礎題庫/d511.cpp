#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d[3],ans=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>d[0]>>d[1]>>d[2];
        sort(d,d+3);
        a=d[0];
        b=d[1];
        c=d[2];
        if(a+b>c) ans++;
    }
    cout<<ans<<endl;
    return 0;
}