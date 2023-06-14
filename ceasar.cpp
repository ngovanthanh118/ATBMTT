#include <bits/stdc++.h>
using namespace std;
string encrypt(string text, int s)
{
	string result = "";
	for(int i = 0; i < text.length(); i++)
	{
		if(isupper(text[i]))
			result += char(int(text[i] + s - 65) % 26 + 65);
		else
			result += char(int(text[i] + s - 97) % 26 + 97);
	}
	return result;
}
string decrypt(string text, int s)
{
	string result = "";
	for(int i = 0; i < text.length(); i++)
	{
		if(isupper(text[i]))
			result += char(int(text[i] - s - 65) % 26 + 65);
		else
			result += char(int(text[i] - s - 97) % 26 + 97);
	}
	return result;
}
int main()
{
	string textCipher, textDecode;
	int key;
	cout<<"Nhap ban ro: ";
	getline(cin,textCipher);
	cout<<"Nhap ban ma: ";
	getline(cin, textDecode);
	cout<<"Nhap khoa: ";
	cin>>key;
	cout<<"Ket qua ma hoa: "<<encrypt(textCipher,key);
	cout<<"\nKet qua giai ma: "<<decrypt(textDecode,key);
	return 0;
}
