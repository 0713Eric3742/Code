#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
void divide(vector<int> num)
{
	if (num.size() == 1)
	{
		cout << num[0] << ' ';
		return;
	}
	vector<int> a, b;
	for (int i = 0; i < num.size(); i++)
	{
		if (i % 2)
			a.push_back(num[i]);
		else
			b.push_back(num[i]);
	}
	divide(a);
	divide(b);
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	cin >> a;
	vector<int> t;
	for (int i = 1; i <= a; i++)
	{
		t.push_back(i);
	}
	divide(t);
	return 0;
}