#include <iostream>
using namespace std;
void quicksort(int a[], int s, int e)
{
	if (s > e)
		return;
	int i = s, j = e, t;
	while (i != j)
	{
		while (a[j] >= a[s] && i < j)
			j--;
		while (a[i] <= a[s] && i < j)
			i++;
		swap(a[i], a[j]);
	}
	swap(a[i], a[s]);
	quicksort(a, s, i - 1);
	quicksort(a, i + 1, e);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	int b[200005];
	cin >> a;
	for (int c = 0; c < a; c++)
	{
		cin >> b[c];
	}
	quicksort(b, 0, a - 1);
	for (int c = 0; c < a; c++)
	{
		cout << b[c] << ' ';
	}
}