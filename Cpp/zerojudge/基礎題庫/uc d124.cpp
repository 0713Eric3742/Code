#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[10005];
    int b,ans;
    while (cin>>a)
    {
        if(a[0]=='0'&&strlen(a)==1) break;
        b=0;
        ans=0;
        if(a[0]=='-') b++;
        for (int i = b; i < strlen(a); i++)
        {
            ans+=a[i]-'0';
        }
        if(ans%3==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}