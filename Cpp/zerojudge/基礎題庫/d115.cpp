#include <bits/stdc++.h>
using namespace std;
int c,e[105],d[105];
void dfs(int step,int h)
{
    if(step==c+1)
    {
        for (int i = 1; i < step-1; i++)
        {
            if(e[i]>=e[i+1]) return;
        }
        for (int i = 1; i < step; i++)
        {
            cout<<e[i]<<' ';
        }
        cout<<endl;
        return;
    }
    for (int i = 0; i < h; i++)
    {
        e[step]=d[i];
        dfs(step+1,h);
    }
    return;
}
int main(int argc, char const *argv[])
{
    int a,b[105],h;
    while (cin>>a)
    {
        h=0;
        if(a==0) break;
        for (int i = 0; i < a; i++)
        {
            cin>>b[i];
        }
        cin>>c;
        sort(b,b+a);
        for (int i = 0; i < a; i++)
        {
            if(b[i]==b[i+1]) i++;
            else d[h++]=b[i];
        }
        dfs(1,h);
    }
    return 0;
}