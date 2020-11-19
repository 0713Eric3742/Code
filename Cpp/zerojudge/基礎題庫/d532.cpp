#include<bits/stdc++.h>
using namespace std;
bool leap(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0) return true;
    else return false;
}
int main(int argc, char const *argv[])
{
    int a,b,ans;
    while (cin>>a>>b)
    {
        ans=0;
        for (int i = a; i <= b; i++)
        {
            if(leap(i)) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}