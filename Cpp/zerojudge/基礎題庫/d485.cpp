#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    while (cin>>a>>b)
    {
        if(b%2==0&&a%2==0) cout<<(b-a)/2+(b-a)%2+1<<endl;
        else cout<<(b-a)/2+(b-a)%2<<endl;
    }
    return 0;
}