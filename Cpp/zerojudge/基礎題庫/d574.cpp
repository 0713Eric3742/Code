#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    int a,c;
    while(cin>>a>>s)
    {
        ans.clear();
        for (int i = 0; i < s.length(); i++)
        {
            c=1;
            while(s[i]==s[i+1])
            {
                i++;
                c++;
            }
            ans+=to_string(c);
            ans+=s[i];
        }
        if(s.length()>ans.length()) cout<<ans<<endl;
        else cout<<s<<endl;
    }
}