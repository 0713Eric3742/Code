//codeforces template
#define MANY_SUBTASK
#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//start here
int q[1000005][2] = {};
void solve_subtask()
{
    int a, b, u, v;
    cin >> a >> b;
    vector<int> edge[a + 5];
    int ans[a + 5] = {};
    bool vis[a + 5] = {};
    for (int i = 0; i < b; i++)
    {
        cin >> u >> v;
        if (u == v)
            ans[u] = 99999999;
        else
        {
            edge[u].emplace_back(v);
        }
    }
    int top = 0, back = 0;
    q[top][0] = 1;
    q[top++][1] = 0;
    ans[1] = 1;
    vis[1] = true;
    while (top != back)
    {
        for (int i = 0; i < edge[q[back][0]].size(); i++)
        {
            if (!vis[edge[q[back][0]][i]])
            {
                q[top][0] = edge[q[back][0]][i];
                q[top++][1] = back;
                ans[edge[q[back][0]][i]] += ans[q[back][0]];
            }
            else
            {
                ans[q[back][0]] = 99999999;
                int t = q[back][1];
                while (t != 0)
                {
                    ans[q[t][0]] = 99999999;
                    t = q[t][1];
                    //cout << t << endl;
                }
                ans[q[t][0]] = 99999999;
            }
        }
        back++;
    }
    for (int i = 1; i <= a; i++)
    {
        if (ans[i] == 0)
        {
            cout << 0 << ' ';
        }
        else if (ans[i] == 1)
        {
            cout << 1 << ' ';
        }
        else if (1 < ans[i] && ans[i] < 5000000)
        {
            cout << 2 << ' ';
        }
        else
        {
            cout << -1 << ' ';
        }
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt = 1;
#ifdef MANY_SUBTASK
    cin >> cnt;
#endif
    while (cnt--)
    {
        solve_subtask();
    }
    return 0;
}