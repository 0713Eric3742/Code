#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,ans;
    while(cin>>b)
    {
        ans=0;
        for(int c=0; c<b; c++)
        {
            cin>>a[c];
        }
        for(int c=b-1; c>0; c--)
        {
            for(int d=0; d<c; d++)
            {
                if(a[d]>a[d+1])
                {
                    swap(a[d],a[d+1]);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}