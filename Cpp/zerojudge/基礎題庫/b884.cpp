#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    while(cin>>a)
    {
        for (int i=0; i<a; i++)
        {
            cin>>b>>c;
            t=100-b-c;
            if(0<t&&t<=30)
                cout<<"sad!"<<endl;
            else if(30<t&&t<=60)
                cout<<"hmm~~"<<endl;
            else if(60<t&&t<100)
                cout<<"Happyyummy"<<endl;
            else
                cout<<"evil!!"<<endl;
        }
    }
}