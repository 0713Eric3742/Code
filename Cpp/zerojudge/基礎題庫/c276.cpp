#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a,c;
    int b,an1,an2;
    while(cin>>a>>b)
    {
        for (int i = 0; i < b; i++)
        {
            cin>>c;
            an1=0,an2=0;
            for (int j = 0; j < 4; j++)
            {
                if(a[j]==c[j]) an1++;
                else
                {
                    for (int k = 0; k < 4; k++)
                    {
                        if(a[k]==c[j])
                        {
                            an2++;
                        }
                    }
                }
            }
            cout<<an1<<'A'<<an2<<'B'<<endl;
        }
    }
    return 0;
}