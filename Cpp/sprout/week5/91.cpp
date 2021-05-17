#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, bu[15] = {};
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		
		//--------------data process-------------
		cin >> b;
		if (b == 1)
		{
			cout << 1 << endl;
			continue;
		}
		for (int j = 0; j < 13; j++)
		{
			bu[j] = 0;
		}
		while (b % 2 == 0)
		{
			bu[2]++;
			b /= 2;
		}
		while (b % 3 == 0)
		{
			bu[3]++;
			b /= 3;
		}
		while (b % 5 == 0)
		{
			bu[5]++;
			b /= 5;
		}
		while (b % 7 == 0)
		{
			bu[7]++;
			b /= 7;
		}
		if (b != 1)
		{
			cout << -1 << endl;
			continue;
		}
		bu[8] = bu[2] / 3;
		bu[2] %= 3;
		
		bu[9] = bu[3] / 2;
		bu[3] %= 2;
		if(bu[2]>=1&&bu[3]>=1)
		{
			bu[2]--;
			bu[3]--;
			bu[6]++;
		}
		if (bu[2] == 2)
		{
			bu[2] = 0;
			bu[4] = 1;
		}
		//-------------data process end---------------
		for (int i = 0; i <= 9; i++)
		{
			while (bu[i])
			{
				cout << i;
				bu[i]--;
			}
		}
		cout << endl;
	}

	return 0;
}