#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
struct my_stack
{
	int nums[100005];
	int head;
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
	int top()
	{
		if (empty())
			return -1;
		return nums[head-1];
	}
	int size()
	{
		return head;
	}
	void clear()
	{
		head = 0;
	}
};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	my_stack station, a, b;
	int cnt1, cnt2, num[100005];
	cin >> cnt1;
	for (int i = 0; i < cnt1; i++)
	{
		a.clear(), b.clear(), station.clear();
		cin >> cnt2;
		for (int j = cnt2; j >= 1; j--)
		{
			a.push(j);
		}
		for (int j = 0; j < cnt2; j++)
		{
			cin >> num[j];
		}
		for (int j = cnt2 - 1; j >= 0; j--)
		{
			b.push(num[j]);
		}
		while (!a.empty())
		{
			station.push(a.pop());
			while (!station.empty() && !b.empty() && station.top() == b.top())
			{
				station.pop();
				b.pop();
			}
		}
		if (b.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}