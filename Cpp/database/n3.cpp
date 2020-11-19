#include<bits/stdc++.h>
using namespace std;
int b[100005],c[100005];
void quicksort(int s,int e)
{
    if(s>e) return;
    int i=s,j=e;
    while(i<j)
    {
        if(b[j]>=b[s]&&i<j) j--;
        if(b[j]<=b[s]&&i<j) i++;
        swap(b[i],b[j]);
        swap(c[i],c[j]);
    }
    swap(b[i],b[s]);
    swap(c[i],c[s]);
    quicksort(s,i-1);
    quicksort(i+1,e);
}
int main()
{
    int a,t1,t2,m,ans=0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>t1>>t2>>c[i];
        b[i]=sqrt(pow(t1,2)+pow(t2,2));
    }
    quicksort(0,a-1);
    ans=0;
    m=c[0];
    if(b[a-1]!=14142)
    {
        c[a]=0;
        a+=1;
    }
    for (int i = 0; i < a; i++)
    {
        if(c[i]>m)
        {
            m=c[i];
            for (int j = i+1; j < a; j++)
            {
                ans=max(ans,c[i]-c[j]);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}