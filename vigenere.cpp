#include <bits/stdc++.h>
using namespace std;
string generateKey (string str, string key)
{
	int x = str.size();
	for(int i = 0; ; i++)
	{
		if(x == i)
			i = 0;
		if(key.size() == str.size())
			break;
		key.push_back(key[i]);
	}
	return key;
}
string encrypt (string str, string key)
{
	string result;
	for(int i = 0; i < str.size(); i++)
	{
		char x = (str[i] + key[i]) % 26;
		if(isupper(str[i]))
			x += 'A';
		else
			x += 'a';
		result.push_back(x);
	}
	return result;
}
string decrypt (string str, string key)
{
	string result;
	for(int i = 0; i < str.size(); i++)
	{
		char x = (str[i] - key[i] + 26) % 26;
		if(isupper(str[i]))
			x += 'A';
		else
			x += 'a';
		result.push_back(x);
	}
	return result;
}
int main()
{
	string plaintext, ciphertext,keyword;
	cout<<"Nhap khoa: ";
	getline(cin, keyword);
	cout<<"Van ban ma hoa: ";
	getline(cin,plaintext);
	cout<<"Van ban giai ma: ";
	getline(cin, ciphertext);
	string key = generateKey(plaintext,keyword);
	cout<<"Ma hoa: "<<encrypt(plaintext,key);
	cout<<"\nGiai ma: "<<decrypt(ciphertext,key);
	return 0;
}
