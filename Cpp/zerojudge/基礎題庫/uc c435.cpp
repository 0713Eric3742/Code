#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,max,b[100001],t;
    cin>>a;
    max=-2147483648;
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    a-=1;
    for (int i = 0; i < a; i++)
    {
        t=a-i;
        for (int j = 1; j <= t; j++)
        {
            if(max<(b[i]-b[i+j])) max=(b[i]-b[i+j]);
        }
    }
    printf("%d\n",max);
}