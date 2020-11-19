#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream i;
    ofstream o;
    i.open("a.txt");
    o.open("b.txt");
    string a;
    while (getline(i,a))
    {
        o<<a<<' ';
    }
    i.close();
    o.close();
    return 0;
}