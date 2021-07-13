#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
struct inside
{
	int start;
	int last;
	string name;
};
class my_stack
{
public:
	inside nums[100005];
	int head;
	inside pop()
	{
		if (head >= 1)
			return nums[--head];
		return {.start = -1, .last = -1, .name = ""};
	}
	void push(inside n)
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
	inside top()
	{
		if (empty())
			return {.start = -1, .last = -1, .name = ""};
		return nums[head - 1];
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
	my_stack stack;
	inside job[10005] = {};
	stack.clear();
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> job[i].last >> job[i].start >> job[i].name;
	}

	return 0;
}