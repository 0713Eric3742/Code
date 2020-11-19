#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    while (cin>>a>>b)
    {
        cout<<fixed<<setprecision(1)<<a/pow(b/100,2)<<endl;
    }
    return 0;
}