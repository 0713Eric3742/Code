#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    while (cin>>a>>b)
    {
        a=a*60+b;
        if(7*60+30<=a&&a<17*60) cout<<"At School"<<endl;
        else cout<<"Off School"<<endl;
    }
    return 0;
}