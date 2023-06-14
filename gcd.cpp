#include <bits/stdc++.h>
using namespace std;
int GCD (int a, int b)
{
	if(a == 0)
		return b;
	if(b == 0);
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
int main ()
{
	int a = 15, b = 20;
	cout<<"GCD is: "<<GCD(a,b);
	return 0;
}

