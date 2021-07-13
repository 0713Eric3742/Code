#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
int K = 500;
int num[150000] = {};
int block[1000000] = {}, ans;
int32_t main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a, t, t1, t2;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		if (t == 1)
		{
			cin >> t1 >> t2;
			num[t1] += t2;
			block[t1 / K] += t2;
		}
		if (t == 2)
		{
			cin >> t1 >> t2;
			num[t1] -= t2;
			block[t1 / K] -= t2;
		}
		if (t == 3)
		{
			t2 = 0, ans = 0;
			cin >> t1;
			while (t1 - block[t2] > 0 && t2 < 5000)
			{
				t1 -= block[t2];
				t2++;
			}
			for (int j = 0; j < K; j++)
			{
				if (t1 - num[t2 * K + j] > 0)
				{
					t1 -= num[t2 * K + j];
				}
				else
				{
					ans = t2 * K + j;
					break;
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}