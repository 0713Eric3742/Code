#include <bits/stdc++.h>
#define MOD 100000007
#define R size
#define C at(0).size
using namespace std;
typedef vector<long long> v1d;
typedef vector<v1d> v2d;
v2d matrix_multi(const v2d &a, const v2d &b)
{
	v1d tmp(b.C(), 0);
	v2d ret(a.R(), tmp);
	int a_R = a.R(), b_C = b.C(), a_C = a.C();
	for (int i = 0; i < a_R; i++)
	{
		for (int j = 0; j < b_C; j++)
		{
			for (int k = 0; k < a_C; k++)
			{
				int temp = ((long long)(a[i][k] % MOD) * (long long)(b[k][j] % MOD)) % (long long)MOD;
				ret[i][j] = ((long long)temp + (long long)(ret[i][j] % MOD)) % (long long)MOD;
			}
		}
	}
	return ret;
}
void print(const v2d &matrix)
{
	int row = matrix.R(), column = matrix.C();
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int Ra, Ca, Rb, Cb;
	cin >> Ra >> Ca;
	v1d tmp(Ca, 0);
	v2d a(Ra, tmp);
	for (int i = 0; i < a.R(); i++)
	{
		for (int j = 0; j < a.C(); j++)
		{
			long long tmp;
			cin >> tmp;
			a[i][j] = ((tmp % (long long)MOD) + (long long)MOD) % (long long)MOD;
		}
	}
	cin >> Rb >> Cb;
	tmp.resize(Cb, 0);
	v2d b(Rb, tmp);
	for (long long i = 0; i < b.R(); i++)
	{
		for (long long j = 0; j < b.C(); j++)
		{
			long long tmp;
			cin >> tmp;
			b[i][j] = ((tmp % (long long)MOD) + (long long)MOD) % (long long)MOD;
		}
	}
	if (a.C() != b.R() && a.R() != b.C())
		cout << "unmultipliable!"
			 << "\n";
	else if (a.C() != b.R() && a.R() == b.C())
		cout << "incommutable!"
			 << "\n";
	else
		print(matrix_multi(a, b));
}