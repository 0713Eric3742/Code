#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    int ans=0,t=0;
    while (cin>>a&&a!="0")
    {
        ans=0;
        t=0;
        for (int i = 0; i < a.length(); i++)
        {
            if('A'<=a[i]&&a[i]<='Z') a[i]=a[i]-'A'+'a';
        }
        for (int i = 0; i < a.length(); i++)
        {
            if(!('a'<=a[i]&&a[i]<='z'))
            {
                t=1;
                break;
            }
        }
        for (int i = 0; i < a.length()&&t==0; i++)
        {
            ans+=a[i]-'a'+1;
        }
        if(t==0) cout<<ans<<endl;
        if(t==1) cout<<"Fail"<<endl;
    }
    return 0;
}