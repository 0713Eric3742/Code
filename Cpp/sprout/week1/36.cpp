#include <bits/stdc++.h>
using namespace std;
struct my_stack
{
    int nums[100005];
    int head = 0;
    int pop()
    {
        if (head >= 1)
            return nums[--head];
        else
            return -1;
    }
    void push(int n)
    {
        nums[head] = n;
        head++;
    }
    bool empty()
    {
        if (head == 0)
            return true;
        return false;
    }
};
int main()
{
    cin.tie(0), ios_base::sync_with_stdio(false);
    int n, t;
    my_stack stack;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> t;
            stack.push(t);
            continue;
        }
        if (t == 2)
        {
            t = stack.pop();
            if (t == -1)
                cout << "empty!" << endl;
            else
                cout << t << endl;
            continue;
        }
    }
    return 0;
}