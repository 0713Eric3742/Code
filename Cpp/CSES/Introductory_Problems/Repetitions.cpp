#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	string s;
	int ans, t;
	while (cin >> s)
	{
		ans = 0;
		for (int i = 0; i < s.length(); i++)
		{
			t = 1;
			while (i + 1 < s.length() && s[i] == s[i + 1])
			{
				t++;
				i++;
			}
			ans = max(ans, t);
		}
		cout << ans << endl;
	}
	return 0;
}