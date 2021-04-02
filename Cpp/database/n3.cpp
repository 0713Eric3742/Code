#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    string s = "ynkooejcpdanqxeykjrbdofgkq";
    for (int i = -20; i < 11; i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            cout << char(s[j] + i);
        }
        cout << endl;
    }
    return 0;
}