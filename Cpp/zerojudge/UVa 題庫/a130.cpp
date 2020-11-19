#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int a,m,c[11];
    char b[10][101];
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        m=-99999999999;
        for (int j = 0; j < 10; j++)
        {
            cin>>b[j]>>c[j];
            if(c[j]>m) m=c[j];
        }
        cout<<"Case #"<<i+1<<":"<<endl;
        for (int j = 0; j < 10; j++)
        {
            if(c[j]==m) cout<<b[j]<<endl;
        }
    }
    return 0;
}