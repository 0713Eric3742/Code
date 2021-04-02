#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, b, t;
	priority_queue<int, vector<int>, greater<int>> pq;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (b == 1)
		{
			cin >> t;
			pq.push(t);
		}
		if (b == 2)
		{
			if(pq.empty())
			{
				cout << "empty!" << endl;
			}
			else
			{
				cout << pq.top() << endl;
				pq.pop();
			}
			
		}
	}

	return 0;
}