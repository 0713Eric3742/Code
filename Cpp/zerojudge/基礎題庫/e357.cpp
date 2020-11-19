#include<bits/stdc++.h>
using namespace std;
int f(int a)
{
    if(a==1) return 1;
    else if(a%2==0) return f(a/2);
    else return f(a-1)+f(a+1);
}
int main()
{
    long long int a,b;
    while (cin>>a)
    {
        cout<<f(a)<<endl;
    }
    return 0;
}