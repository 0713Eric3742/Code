#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int c;
    while(cin>>c)
    {
        for(int i = 1; i <= c; i++)
        {
            for (int j = c; j > i; j--)
            {
                cout<<'_';
            }
            for (int j = 1; j < i*2; j++)
            {
                cout<<'*';
            }
            for (int j = c; j > i; j--)
            {
                cout<<'_';
            }
            cout<<endl;
        }
    }
    return 0;
}