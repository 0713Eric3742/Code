#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    char a[5000]={},b;
    int c,d,t;
    while (cin>>c)
    {
        t=0;
        d=c*c;
        for (int i = 0; i < d; i++)
        {
            cin>>b;
            if((i)%(c+1)==0)
            {
                a[t]=b;
                t++;
            }
        }
        for (int i = 0; i < c; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}