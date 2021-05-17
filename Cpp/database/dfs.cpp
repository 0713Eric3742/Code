#include <iostream>
using namespace std;
int book[100] = {}, a[100] = {};
void dfs(int step, int range)
{
	if (step == range + 1)
	{
		for (int i = 0; i < range; i++)
		{
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < range; i++)
	{
		if (book[i] == 0)
		{
			a[step - 1] = i;
			book[i] = 1;
			dfs(step + 1, range);
			book[i] = 0;
		}
	}
	return;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int range;
	cin >> range;
	dfs(1, range);
}