#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[2],b[2],c[2],ans=-99999999,n;
    for (int i = 0; i < 2; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        ans=max(ans,a[0]*i*i+b[0]*i+c[0]+a[1]*(n-i)*(n-i)+b[1]*(n-i)+c[1]);
    }
    cout<<ans<<endl;
    return 0;
}