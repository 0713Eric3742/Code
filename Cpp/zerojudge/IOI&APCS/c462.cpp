#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    int b,t,n,ans;
    while(cin>>b>>a)
    {
        n=0;
        ans=0;
        for (int i = 0; i < a.length(); i++)
        {
            t=1;
            while(('a'<=a[i]&&a[i]<='z'&&'a'<=a[i+1]&&a[i+1]<='z')||('A'<=a[i]&&a[i]<='Z'&&'A'<=a[i+1]&&a[i+1]<='Z'))
            {
                i++;
                t++;
            }
            if(t==b)
            {
                n+=b;
                ans=max(ans,n);
            }
            else if(t>b)
            {
                n+=b;
                ans=max(ans,n);
                if(n!=b) n=b;
            }
            else n=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}