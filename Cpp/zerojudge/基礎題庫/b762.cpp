#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,t,k,d,a;
    string b;
    while(cin>>c)
    {
        t=0,k=0,d=0,a=0;
        for(int i=0; i<c; i++)
        {
            cin>>b;
            if(b=="Get_Kill")
            {
                k++;
                t++;
                if(t<3)
                    cout<<"You have slain an enemie."<<endl;
                if(t==3)
                    cout<<"KILLING SPREE!"<<endl;
                if(t==4)
                    cout<<"RAMPAGE~"<<endl;
                if(t==5)
                    cout<<"UNSTOPPABLE!"<<endl;
                if(t==6)
                    cout<<"DOMINATING!"<<endl;
                if(t==7)
                    cout<<"GUALIKE!"<<endl;
                if(t>=8)
                    cout<<"LEGENDARY!"<<endl;
            }
            if(b=="Die")
            {
                if(t<3)
                    cout<<"You have been slained."<<endl;
                else
                    cout<<"SHUTDOWN."<<endl;
                t=0;
                d++;
            }
            if(b=="Get_Assist")
            {
                a++;
            }
        }
        cout<<k<<'/'<<d<<'/'<<a<<endl;
    }
}