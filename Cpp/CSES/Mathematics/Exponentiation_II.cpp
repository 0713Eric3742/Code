#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
bool is[100000005] = {};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	vector<int> prime;
	int a, ans = 0;
	cin >> a;
	cout << ans << endl;
	for (int i = 2; i <= a; i++)
	{
		if (is[i] == false)
			prime.emplace_back(i);
		for (int j = 0; j < prime.size(); j++)
		{
			if (i * prime[j] <= a)
				is[i * prime[j]] = true;
			else
				break;
			if (i % prime[j] == 0)
				break;
		}
	}

	return 0;
}