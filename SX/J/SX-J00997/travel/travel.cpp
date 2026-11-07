#include <bits/stdc++.h>
using namespace std;
long long q, a, m, n, e;
string w, s;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin >> q >> w >> a >> s;
	if (q == a)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if (w[0] == s[0] && w[1] == s[1])
	{
		cout << 1;
	}
	else
	{
		cout << "000";
		return 0;
	}
	n = w[2] - 'A';
	m = s[2] - 'A';
	if (m < 3 && n < 3)
	{
		cout << 1;
	}
	else if (m >= 3 && n >= 3)
	{
		cout << "11";
		return 0;
	}
	else
	{
		cout << "00";
		return 0;
	}
	e = abs(m - n);
	if (e == 1)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
