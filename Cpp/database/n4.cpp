#include<bits/stdc++.h>
using namespace std;
const int int_max = 2147483647;
void merge(vector<int> &a, int s, int m, int e)
{
	vector<int> l(a.begin() + s, a.begin() + m + 1), r(a.begin() + m + 1, a.begin() + e + 1);
	l.push_back(int_max);
	r.push_back(int_max);
	int idxl = 0, idxr = 0;
	for (int i = s; i <= e; i++)
	{
		if (l[idxl] <= r[idxr])
		{
			a[i] = l[idxl];
			idxl++;
		}
		else
		{
			a[i] = r[idxr];
			idxr++;
		}
	}
}
void mergesort(vector<int> &a, int s, int e)
{
	if (s < e)
	{
		int m = (s + e) / 2;
		mergesort(a, s, m);
		mergesort(a, m + 1, e);
		merge(a, s, m, e);
	}
}