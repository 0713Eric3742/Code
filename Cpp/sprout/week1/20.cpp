#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
int team[1000005] = {};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	bool f[1005] = {};
	queue<pair<int, int>> q1;
	queue<int> q2[1005];
	int cnt, t1, t2, line = 1;
	string s;
	while (cin >> cnt)
	{
		for (int i = 0; i < 1000003; i++)
		{
			team[i] = 0;
		}
		for (int i = 0; i < 1003; i++)
		{
			f[i] = false;
			while (q2[i].size() != 0)
				q2[i].pop();
		}
		while (q1.size() != 0)
			q1.pop();
		cout << "Line #" << line++ << endl;

		for (int i = 1; i <= cnt; i++)
		{
			cin >> t1;
			for (int j = 0; j < t1; j++)
			{
				cin >> t2;
				team[t2] = i;
			}
		}
		while (cin >> s && s != "STOP")
		{
			if (s == "ENQUEUE")
			{
				cin >> t1;
				if (team[t1] == 0)
				{
					q1.push(make_pair(0, t1));
				}
				else
				{
					if (f[team[t1]] == false)
					{
						q1.push(make_pair(team[t1], 0));
						q2[team[t1]].push(t1);
						f[team[t1]] = true;
					}
					else
					{
						q2[team[t1]].push(t1);
					}
				}
			}
			if (s == "DEQUEUE")
			{
				pair<int, int> t = q1.front();
				if (t.first == 0)
				{
					cout << t.second << endl;
					q1.pop();
				}
				else
				{
					cout << q2[t.first].front() << endl;
					q2[t.first].pop();
					if (q2[t.first].empty())
					{
						q1.pop();
						f[team[t.first]] == false;
					}
				}
			}
		}
	}

	return 0;
}