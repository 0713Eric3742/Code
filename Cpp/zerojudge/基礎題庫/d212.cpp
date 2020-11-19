#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int a[105],b;
    a[1]=1,a[2]=2;
    for (int i = 3; i < 101; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while (cin>>b)
    {
        cout<<a[b]<<endl;
    }
    return 0;
}