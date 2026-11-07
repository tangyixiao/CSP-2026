#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char zuowei1, zuowei2;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	zuowei1 = s1[2];
	zuowei2 = s2[2];
	
	if (c1 == c2) //1
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1]) //2
	{
		cout << 1;	
	}
	else
	{
		cout << "000";
		return 0;
	}
	if ((zuowei1 <= 'C' && zuowei2 >= 'D') || (zuowei1 >= 'D' && zuowei2 <= 'c')) //3
	{
		cout << "00";
		return 0;
	}
	else
	{
		cout << 1;
	}
	if (abs(zuowei1 - zuowei2) == 1)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
