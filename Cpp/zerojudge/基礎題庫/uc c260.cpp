#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    cin.tie(0);
	ios::sync_with_stdio(false);
    int a,b,c,t,d[100000],ans;
    while(cin>>a>>b>>c)
    {
        ans=0;
        for (int i=0; i<a; i++)
        {
            cin>>d[i];
        }
        for(int i=1; i<=a; i++)
        {
            for(int j=0; j<(a-i+1); j++)
            {
                t=0;
                for(int k=0; k<i; k++)
                {
                    t+=d[k+j];
                }
                if(b<=(t/i)&&(t/i)<=c) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}