#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    int f,ans;
    while(getline(cin,a))
    {
        ans=0;
        for (int i = 0; i < a.length(); i++)
        {
            f=0;
            while(('a'<=a[i]&&a[i]<='z')||('A'<=a[i]&&a[i]<='Z'))
            {
                i++;
                f=1;
            }
            if(f==1) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}