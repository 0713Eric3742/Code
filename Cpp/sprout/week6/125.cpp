#pragma GCC optimize(3, "Ofast", "inline")
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int a;
const int MAXN = 1e6;
pair<int, int> n[MAXN + 5] = {};
int BIT1[MAXN + 5] = {};
int BIT2[MAXN + 5] = {};
void add(int k, int val)
{
    while (k <= MAXN)
    {
        BIT1[k] += val;
        BIT2[k] += 1;
        k += (k & -k);
    }
}
int sum(int k, int num)
{
    int ret = 0, ret2 = 0;
    while (k)
    {
        ret += BIT1[k];
        ret2 += BIT2[k];
        k -= (k & -k);
    }
    return ret + ret2 * num;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> n[i].first;
        n[i].second = i;
    }
    sort(n + 1, n + 1 + a);
    reverse(n + 1, n + 1 + a);
    for (int i = 1; i <= a; i++)
    {
        add(n[i].second, n[i].first);
        ans += sum(n[i].second - 1, n[i].first);
        ans %= 10000019;
    }
    cout << ans % 10000019 << endl;
    return 0;
}