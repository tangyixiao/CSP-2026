#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 == c3)
		cout << 1;
	else
	{
		cout << "0000\n";
		return 0;
	}
	if (c2[0] == c4[0] && c2[1] == c4[1])
		cout << 1;
	else
	{
		cout << "000\n";
		return 0;
	}
	char x = c2[2], y = c4[2];
	if ((x <= 'C' && y <= 'C') || (x > 'C' && y > 'C'))
		cout << 1;
	else
	{
		cout << "00\n";
		return 0;
	}
	if ((x == 'D' && y == 'F') || (x == 'F' && y == 'D') || x == y + 1 || x == y - 1)
		cout << 1;
	else
	{
		cout << "0\n";
		return 0;
	}
	cout << '\n';
	return 0;
}
