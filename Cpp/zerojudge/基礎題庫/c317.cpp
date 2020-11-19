#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d,e;
    bool ans;
    while(cin>>a)
    {
        for (int i = 0; i < a; i++)
        {
            cin>>b>>c>>d;
            ans=false;
            e=b;
            while(e>=0)
            {
                if(e%c==0)
                {
                    ans=true;
                    break;
                }
                e-=d;
            }
            if(ans) cout<<(e/c)+(b-e)/d<<endl;
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}