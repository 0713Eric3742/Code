#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
bool isprime[1000005] = {};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	vector<int> prime;
	isprime[1] = true;
	for (int i = 2; i <= 1000000; i++)
	{
		if (!isprime[i])
			prime.emplace_back(i);
		for (int j = 0; j < prime.size() && i * prime[j] <= 1000000; j++)
		{
			isprime[i * prime[j]] = true;
			if (i % prime[j] == 0)
				break;
		}
	}
	cout << prime.size() << endl;
	int a, t;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> t;
		for (int j = 0; j < prime.size(); j++)
		{
			
		}
		
	}
	return 0;
}