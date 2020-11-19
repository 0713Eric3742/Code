#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int c;
    while(cin>>c)
    {
        for(int i = 1; i <= c; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout<<'*';
            }
            cout<<endl;
        }
    }
    return 0;
}