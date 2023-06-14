#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b)
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
int modInverse (int a, int m)
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
string encrypt (string text, int a, int b)
{
	string result = "";
	for(int i = 0; i < text.length(); i++)
	{
		if(text[i] != ' ')
			result += char((((a * (text[i] + 'A')) + b) % 26) + 'A');
		else
			result += text[i];
	}
	return result;
}
string decrypt(string text, int a, int b)
{
	string result = "";
	int a_inv = modInverse(a,26);
	for(int i = 0; i < text.length(); i++)
	{
		if(text[i] != ' ')
			result += char(((a_inv * (text[i] + 'A' - b)) % 26) + 'A');
		else
			result += text[i];
	}
	return result;
}
int main()
{
	string cipherText, decodeText;
	int a, b;
	cout<<"Nhap ban ro: ";
	getline(cin,cipherText);
	cout<<"Nhap ban ma: ";
	getline(cin,decodeText);
	do{
		cout<<"Nhap khoa: \n";
		cout<<"a = ";
		cin>>a;
		cout<<"b = ";
		cin>>b;
	}
	while(gcd(a, 26) != 1);
	cout<<"Ket qua ma hoa: "<<encrypt(cipherText, a, b);
	cout<<"\nKet qua giai ma: "<<decrypt(decodeText, a, b);
	return 0;
}
