#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
struct node
{
    int data;
    node *l;
    node *r;
};
node *start = nullptr;
node *assign(int val)
{
    node *t = new node;
    t->data = val;
    t->l = NULL;
    t->r = NULL;
    return t;
}
void push(int val)
{
    node *t = start, *l;
    while (t != NULL)
    {
        l = t;
        if (val > t->data)
        {
            t = t->r;
        }
        else
        {
            t = t->l;
        }
    }
    if (val > l->data)
    {
        l->r = assign(val);
    }
    else
    {
        l->l = assign(val);
    }
}
void dfs(node *now)
{
    cout << now->data << ' ';
    if (now->l != NULL)
        dfs(now->l);
    if (now->r != NULL)
        dfs(now->r);
    free(now);
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int a, cnt;
    while (cin >> cnt)
    {
        start = NULL;
        for (int i = 0; i < cnt; i++)
        {
            cin >> a;
            if (start == NULL)
            {
                start = assign(a);
            }
            else
            {
                push(a);
            }
        }
        dfs(start);
        cout << endl;
    }
    return 0;
}