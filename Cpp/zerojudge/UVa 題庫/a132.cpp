#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int a,ans;
    string s;
    while(cin>>a&&a!=0)
    {
        s.clear();
        ans=0;
        while(a!=0)
        {
            ans+=a%2;
            s.push_back(char(a%2)+'0');
            a/=2;
        }
        reverse(s.begin(),s.end());
        cout<<"The parity of "<<s<<" is "<<ans<<" (mod 2)."<<endl;
    }
    return 0;
}