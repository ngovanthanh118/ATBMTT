#include <bits/stdc++.h>
using namespace std;
int BPvaNhan(int x, int n, int m)
{
	int p;
	if(n == 0)
		return 1;
	p = BPvaNhan(x, n / 2, m);
	if(n % 2 == 0)
		return (p * p) % m;
	else
		return (p * p * x) % m;
}
int main()
{
	int x = 23, n = 27, m = 101;
	cout<<"Result: "<<BPvaNhan(x,n,m);
	return 0;
}
