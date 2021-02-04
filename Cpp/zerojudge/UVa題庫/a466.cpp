#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, f;
	string s;
	string num[4] = {"Null", "one", "two", "three"};
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> s;
		for (int j = 1; j <= 3; j++)
		{
			if(s.length()!=num[j].length())
				continue;
			f = 0;
			for (int k = 0; k < num[j].length() && k < s.length(); k++)
			{
				if (s[k] != num[j][k])
					f++;
			}
			if (f < 2)
				cout << j << endl;
		}
	}
	return 0;
}