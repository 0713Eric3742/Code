#include <bits/stdc++.h>
using namespace std;
struct my_queue
{
    int nums[200005];
    int head = 0, tail = 0;
    int pop()
    {
        if (head == tail)
            return -1;
        else
        {
            int t = head;
            head = (head + 1) % 200000;
            return nums[t];
        }
    }
    void push(int n)
    {
        nums[tail] = n;
        tail = (tail + 1) % 200000;
    }
};
int main()
{
    cin.tie(0), ios_base::sync_with_stdio(false);
    int n, t;
    my_queue queue;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> t;
            queue.push(t);
            continue;
        }
        if (t == 2)
        {
            t = queue.pop();
            if (t == -1)
                cout << "empty!" << endl;
            else
                cout << t << endl;
            continue;
        }
    }
    return 0;
}