#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
int num[5000005] = {};
int BIT[5000005] = {};
int a, b, c, t, t1, t2, l;
void add(int k, int val)
{
	while (k <= a)
	{
		BIT[k] += val;
		k += (k & -k);
	}
}
int sum(int k)
{
	int ret = 0;
	while (k)
	{
		ret += BIT[k];
		k -= (k & -k);
	}
	return ret;
}
int32_t main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	for (int i = 0; i < 5000003; i++)
	{
		BIT[i] = 0;
	}
	string str;
	cin >> a >> b >> c;
	map<int, pair<int, int>> s;
	auto iter = s.end();
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		iter = s.find(t);
		if (iter == s.end())
		{
			l = (rand() % 10000) * 100000000 + (rand() % 10000) * 10000 + (rand() % 10000);
			s.emplace(make_pair(t, make_pair(1, l)));
			num[i] = l;
		}
		else
		{
			num[i] = iter->second.second;
			iter->second.first++;
			if (iter->second.first == b)
			{
				iter->second.first = 0;
				num[i] = iter->second.second * (-b + 1);
			}
		}
		//cout << num[i] << ' ';
	}
	//cout << endl;
	for (int i = 0; i < a; i++)
	{
		add(i + 1, num[i]);
	}
	for (int i = 0; i < c; i++)
	{
		cin >> t1 >> t2;
		t = (sum(t2) - sum(t1 - 1));
		if (t == 0)
			str += '1';
		else
			str += '0';
	}
	cout << str << endl;
	return 0;
}