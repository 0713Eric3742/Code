#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    long long int ans=0;
    cin>>a;
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]=='Q')
        {
            for (int j = i+1; j < a.length(); j++)
            {
                if(a[j]=='A')
                {
                    for (int k = j+1; k < a.length(); k++)
                    {
                        if(a[k]=='Q') ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}