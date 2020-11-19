#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c[105],d[105],e[105][105],f=0;
    while(cin>>a>>b&&a!=0&&b!=0)
    {
        f++;
        for (int i = 0; i < a; i++)
        {
            cin>>c[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin>>d[i];
        }
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                e[i][j]=0;
            }
        }
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                if(c[i-1]==d[j-1])  e[i][j]=e[i-1][j-1]+1;
                else e[i][j]=max(e[i-1][j],e[i][j-1]);
            }
        }
        cout<<"Twin Towers #"<<f<<endl;
        cout<<"Number of Tiles : "<<e[a][b]<<endl<<endl;
    }
    return 0;
}