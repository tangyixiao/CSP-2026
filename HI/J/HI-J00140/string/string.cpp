#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

static int n;
static string s1, s2;

static string reverseString(const string &str)
{
	string strRet = "";
	size_t strLength = str.length();
	for (size_t i = 0; i < strLength; i++)
		strRet += str[strLength - i - 1];
	return strRet;
}

static size_t countStringDiff(const string &str1, const string &str2)
{
	size_t strLength1 = str1.length();
	size_t strLength2 = str2.length();
	size_t ret = 0;
	if (strLength1 != strLength2)
		return ((strLength1 >= strLength2) ? (strLength1 - strLength2) : (strLength2 - strLength1));
	for (size_t i = 0; i < (min(strLength1, strLength2) + 1) / 2; i++)
		if (str1[i] != str2[i])
			++ret;
	return ret;
}

int main(void)
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		size_t a;
		char c;
		cin >> a >> c;
		for (size_t j = 0; j < a; j++)
			s1 += c;
	}
	s2 = reverseString(s1);
	cout << countStringDiff(s1, s2) << endl;
	return 0;
}
