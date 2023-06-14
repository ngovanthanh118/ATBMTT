#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
	if(a == 0)
		return b;
	if(b == 0)
		return a;
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int modInverse(int a, int m)
{
	int m0 = m;
	int y = 0, x = 1;
	if(a == 1)
		return 0;
	while(a > 1)
	{
		int q = a / m;
		int t = m;
		m = a % m;
		a = t;
		t = y;
		y = x - q * y;
		x = t;
	}
	if(x < 0)
		x += m0;
	return x;	
}
int main()
{
	int a = 3, m = 11;
	if(GCD(a,m) != 1)
	{
		cout<<"Khong ton tai phan tu nghich dao!";
	}
	else
	{
		cout<<"Result: "<<modInverse(a,m);
	}
	return 0;
}

