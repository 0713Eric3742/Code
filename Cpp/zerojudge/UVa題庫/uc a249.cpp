#include <bits/stdc++.h>
using namespace std;
int main()
{
	int node[21];
	for (int i = 0; i <= 20; i++)
	{
		node[i] = pow(2, i) - 1;
		//cout << node[i] << endl;
	}
	int a, b, c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		cout << node[b-1] + c << endl;
	}

	return 0;
}