#include<bits/stdc++.h>
using namespace std;
struct node
{
    char data[100];
    struct node *next;
};
int main()
{
    struct node *start,*t,*l;
    start=NULL;
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        t=new node;
        cin>>t->data;
        t->next=NULL;
        if(start==NULL) start=t;
        else l->next=t;
        l=t;
    }
    t=start;
    while (t!=NULL)
    {
        cout<<t->data<<' ';
        l=t;
        t=t->next;
        free(l);
    }
}