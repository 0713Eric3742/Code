#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        cin>>a;
        if((a%4==0&&a%100!=0)||a%400==0) cout<<"Case "<<i+1<<": a leap year"<<endl;
        else cout<<"Case "<<i+1<<": a normal year"<<endl;
    }
    return 0;
}