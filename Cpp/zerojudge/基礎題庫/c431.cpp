#include<stdio.h>
using namespace std;
int main()
{
    int a,b[101]={},t;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%d",&t);
        b[t]++;
    }
    for (int i = 1; i < 101; i++)
    {
        for (int j = 0; j < b[i]; j++)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}