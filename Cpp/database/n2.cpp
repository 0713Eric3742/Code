#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
//#define int long long
struct trie_node
{
	vector<trie_node *> child;
	char data;
};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a;
	string s = "Ne iy nytkwpsznyg nth it mtsztcy vjzprj zfzjy rkhpibj nrkitt ltc tnnygy ysee itd tte cxjltk Ifrosr tnj noawde uk siyyzre,yse Bnretèwp Cousex mls hjpn xjtnbjytki xatd eisjd Iz bls lfwskqj ";
	for (int j = 0; j < 16; j++)
	{
		for (int i = 0; i < s.length(); i++)
		{
			cout << char(s[i] + j);
		}
		cout << endl;
	}

	return 0;
}