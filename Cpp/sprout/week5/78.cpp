#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num[7];
	while (cin >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6])
	{
		int t = 0;
		for (int i = 1; i <= 6; i++)
		{
			t += num[i];
		}
		if (t == 0)
			break;
		int box = num[6] + num[5] + num[4];
		num[1] -= 11 * num[5];
		num[2] -= 5 * num[4];
		box += (num[3] / 4);
		if (num[3] % 4)
			box++;
		if (num[3] % 4 == 1)
		{
			num[2] -= 5;
			num[1] -= 7;
		}
		if (num[3] % 4 == 2)
		{
			num[2] -= 3;
			num[1] -= 6;
		}
		if (num[3] % 4 == 3)
		{
			num[2] -= 1;
			num[1] -= 5;
		}
		if (num[2] > 0)
		{
			box += num[2] / 9;
			if (num[2] % 9)
				box++;
			num[1] -= (36 - (num[2] % 9) * 4);
		}
		else if (num[2] < 0)
			num[1] -= (-num[2]) * 4;
		if (num[1] > 0)
		{
			box += (num[1] / 36);
			if (num[1] % 36)
				box++;
		}
		cout << box << endl;
	}
	return 0;
}