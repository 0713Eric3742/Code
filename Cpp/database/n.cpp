#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    long long fib[200005];
    fib[1] = 1;
    fib[2] = 1;
    for(int i=3 ; i<=n ; i=i+1 ) fib[i] = (fib[i-1] + fib[i-2])%998244353;
	return fib[n];
}
int power(int x, int y, int p) 
{
	int res = 1;
	x = x % p;
	while (y > 0) 
	{ 
		if (y & 1) res = (res*x) % p; 
		y = y>>1;
		x = (x*x) % p; 
	} 
	return res;
}
long long calculate(long long p,long long q) 
{ 
    long long mod = 998244353, expo; 
    expo = mod - 2; 
    while (expo)
	{ 
        if (expo & 1)
		{ 
            p = (p * q) % mod; 
        } 
        q = (q * q) % mod; 
        expo >>= 1; 
    } 
    return p; 
} 
int main()
{
	int a;
	cin>>a;
	cout<<(f(a)*calculate(1,power(2,a,998244353)))%998244353;
	return 0;
}