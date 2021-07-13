#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
list<int> block[2000];
const int K = 340;
int a, b, t1, t2;
void add(int place, int num)
{
	//cout << place / K << endl;
	int t = ((place / K + 1) * K) - place;
	if (block[place / K].size() != K)
	{
		int t = place - ((place / K) * K);
		auto iter = block[place / K].begin();
		for (int i = 0; i < t; i++)
		{
			iter++;
		}
		block[place / K].insert(iter, num);
		return;
	}
	int b = block[place / K].back();
	int cnt = 1;
	vector<int> s;
	for (int i = 0; i < t; i++)
	{
		s.push_back(b);
		block[place / K].pop_back();
		b = block[place / K].back();
	}
	for (int i = s.size() - 1; i >= 1; i--)
	{
		block[place / K].push_back(s[i]);
	}
	while (block[place / K + cnt].size() != 0)
	{
		block[place / K + cnt].push_front(s[0]);
		s[0] = block[place / K + cnt].back();
		block[place / K + cnt].pop_back();
		cnt++;
	}
	cnt--;
	if (block[place / K + cnt].size() != K)
	{
		block[place / K + cnt].push_back(s[0]);
	}
	else
	{
		block[place / K + cnt + 1].push_back(s[0]);
	}
}
void leave(int place)
{
	int t = place - ((place / K) * K);
	auto iter = block[place / K].begin();
	for (int i = 0; i < t; i++)
	{
		iter++;
	}
	block[place / K].erase(iter);
	int cnt = 1;
	while (block[place / K + cnt].size() != 0)
	{
		t = block[place / K + cnt].front();
		block[place / K + cnt].pop_front();
		block[place / K + cnt - 1].push_back(t);
		cnt++;
	}
}
void query(int place)
{
	int t = place - ((place / K) * K);
	auto iter = block[place / K].begin();
	for (int i = 0; i < t; i++)
	{
		iter++;
	}
	cout << *iter << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//int cnt = 0;
	cin >> a >> b;
	string s;
	for (int i = 0; i < a; i++)
	{
		cin >> t1;
		block[i / K].push_back(t1);
	}
	for (int i = 0; i < b; i++)
	{
		cin >> s;
		if (s[0] == 'A')
		{
			cin >> t1 >> t2;
			t1 -= 1;
			add(t1, t2);
		}
		if (s[0] == 'L')
		{
			cin >> t1;
			t1 -= 1;
			leave(t1);
		}
		if (s[0] == 'Q')
		{
			cin >> t1;
			t1 -= 1;
			query(t1);
		}
		/*for (auto i = block[0].begin(); i != block[0].end(); i++)
		{
			cout << *i << ' ';
		}
		cout << endl;*/
	}
	return 0;
}