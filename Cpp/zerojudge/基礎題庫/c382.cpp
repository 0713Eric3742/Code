#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,c;
    char b;
    while (cin>>a>>b>>c)
    {
        switch (b)
        {
            case '+' :
                cout<<a+c<<endl;
                break;
            case '-' :
                cout<<a-c<<endl;
                break;
            case '*' :
                cout<<a*c<<endl;
                break;
            case '/' :
                cout<<a/c<<endl;
                break;
        }
    }
    return 0;
}