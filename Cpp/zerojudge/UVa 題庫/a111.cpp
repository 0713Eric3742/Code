#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int a,b,c[101]={};
    for (int i = 0; i < 100; i++)
    {
        if(i>=1) c[i]=pow((i+1),2)+c[i-1];
        else c[i]=pow((i+1),2);
    }
    while(cin>>a&&a!=0)
    {
        cout<<c[a-1]<<endl;
    }
    return 0;
}