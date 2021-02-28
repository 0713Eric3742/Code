#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
bool isprime[100005] = {};
vector<int> prime;
int i, a, t;
main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	isprime[1] = 0;
	for (int i = 2; i <= 100000; i++)
	{
		if (!isprime[i])
			prime.emplace_back(i);
		for (int j = 0; j <= prime.size() && i * prime[j] <= 100000; j++)
		{
			isprime[i * prime[j]] = 1;
			if (i % prime[j] == 0)
				break;
		}
	}
	int ans;
	cin >> a;
	ans = a;
	for (i = 2; i <= a; i++)
	{
		t = 2;
		while (pow(i,t) <= a)
		{
			if(!prime[t])
				ans--;
			t++;
		}
	}
	cout << ans << endl;
	return 0;
}