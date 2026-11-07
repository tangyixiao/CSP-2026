#include <bits/stdc++.h>
using namespace std;
int n, m;
string a, b, c, d, s;
bool w;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (b[2] == 'A')
		n = 1;
	if (b[2] == 'B')
		n = 2;
	if (b[2] == 'C')
		n = 3;
	if (b[2] == 'D')
		n = 4;
	if (b[2] == 'F')
		n = 5;
	if (d[2] == 'A')
		m = 1;
	if (d[2] == 'B')
		m = 2;
	if (d[2] == 'C')
		m = 3;
	if (d[2] == 'D')
		m = 4;
	if (d[2] == 'F')
		m = 5;
	b[2] = 'E';
	if (d[2] == 'F')
		d[2] = 'E';
	if (a == c)
		s[0] = '1';
	else
		s[0] = '0';
	if (a == c && b[0] == d[0] && b[1] == d[1])
		s[1] = '1';
	else
		s[1] = '0';
	if (a == c && b[0] == d[0] && b[1] == d[1] && n <= 3 && m <= 3 )
		s[2] = '1', w = 1;
	else if (a == c && b[0] == d[0] && b[1] == d[1] && n > 3 && m > 3 )
		s[2] = '1', w = 1;
	else
		s[2] = '0';
	if (a == c && b[0] == d[0] && b[1] == d[1] && w == 1 && (n == m + 1 || n == m - 1))
		s[3] = '1';
	else
		s[3] = '0';
	cout << s[0] << s[1] << s[2] << s[3];
	return 0;
}
