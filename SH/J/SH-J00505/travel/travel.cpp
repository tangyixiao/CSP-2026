#include <bits/stdc++.h>
using namespace std;

string c, s, cc, ss;

bool checkh(char a, char b)
{
	if (a <= 'C' and b <= 'C') return 1;
	if (a >= 'D' and b >= 'D') return 1;
	return 0;
}

bool checkl(char a, char b)
{
	if (a + 1 == b or a - 1 == b) return 1;
	return 0;
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> c >> s >> cc >> ss;
	if (c != cc)
	{
		cout << "0000\n";
		return 0; 
	}
	cout << 1;
	if (s[0] != ss[0] or s[1] != ss[1])
	{
		cout << "000\n";
		return 0;
	}
	cout << 1;
	if (!checkh(s[2], ss[2]))
	{
		cout << "00\n";
		return 0;
	}
	cout << 1;
	if (!checkl(s[2], ss[2]))
	{
		cout << "0\n";
		return 0;
	}
	cout << "1\n";
	return 0;
}

