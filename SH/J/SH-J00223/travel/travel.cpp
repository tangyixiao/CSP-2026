#include<iostream>
using namespace std;
int c1, c2;
string s1, s2;
bool chk(char a, char b)
{
	if (a <= 'C') return b <= 'C';
	return b > 'C';
}
bool chk2(char a, char b)
{
	if (a > 'C') return true;
	return a == b+1 || a+1 == b;
}
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1])
		{
			cout << 1;
			if (chk(s1[2], s2[2]))
			{
				cout << 1;
				if (chk2(s1[2], s2[2]))	cout << 1;
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else
		cout << "0000";
	return 0;
}
