#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int z = 0, s = 0, n = 0, m = 0;

bool f[4] = {1, 1, 1, 1};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a[0] == '1')
		z = 10;
	z = a[1] - '0' + z;
	if (c[0] == '1')
		s = 10;
	s = c[1] - '0' + s;
	if (z == s)
		cout << 1, f[0] = 0;
	else
		cout << 0;
	if (b[0] == d[0] && b[1] == d[1] && f[0] == 0)
		cout << 1, f[1] = 0;
	else
		cout << 0;
	if (b[0] == '1')
		n = 10;
	n = b[1] - '0' + n;
	if (d[0] == '1')
		m = 10;
	m = d[1] - '0' + m;
	if ((f[1] == 0 && b[2] <= 'C' && d[2] <= 'C' ) || (f[1] == 0 && b[2] > 'C'
	        && d[2] > 'C'))
		cout << 1, f[2] = 0;
	else
		cout << 0;
	if (b[2] == 'D')
		b[2] = b[2] + 1;
	if (d[2] == 'D')
		d[2] = d[2] + 1;
	if ((f[2] == 0 && b[2] - d[2] == 1 ) || ( f[2] == 0 && b[2] - d[2] == -1))
		cout << 1;
	else
		cout << 0;
	return 0;
}