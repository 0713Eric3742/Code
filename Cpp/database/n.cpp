#include <iostream>
using namespace std;
struct node
{
	double data;
	node *next;
};
node *bucket[15], *last[15];
node *assign(double num)
{
	node *t = new node;
	t->data = num;
	t->next = nullptr;
	return t;
}
void push(int index, double num)
{
	if (bucket[index] == NULL)
	{
		bucket[index] = assign(num);
		last[index] = bucket[index];
	}
	else
	{
		last[index]->next = assign(num);
		last[index] = last[index]->next;
	}
}
int main()
{
	node *now, *last;
	double a, t;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		push(10, t);
	}
	for (double i = 0.01;; i *= 10)
	{
		now = bucket[10];
		while (now != NULL)
		{
			t = ((int)((now->data) / i)) % 10;
			push(t, now->data);
			last = now;
			now = now->next;
			free(last);
		}
		bucket[10] = nullptr;
		for (int i = 0; i < 10; i++)
		{
			now = bucket[i];
			while (now != NULL)
			{
				push(10, now->data);
				last = now;
				now = now->next;
				free(last);
			}
			bucket[i] = nullptr;
		}
		if (i == 1e9)
			break;
	}
	now = bucket[10];
	while (now != NULL)
	{
		cout << now->data << ' ';
		last = now;
		now = now->next;
		free(last);
	}
	bucket[10] = nullptr;
	return 0;
}