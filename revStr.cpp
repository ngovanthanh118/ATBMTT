#include <bits/stdc++.h>
using namespace std;
string reverseString (string str)
{
	int len = str.size();
	for(int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i -1];
		str[len - i -1] = temp;
	}
	return str;
}
int main()
{
	string text = "Ngo Van Thanh";
	cout<<reverseString(text);
	return 0;
}
