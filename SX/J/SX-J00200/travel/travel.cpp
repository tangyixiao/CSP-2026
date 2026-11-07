#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
char n, m;
int ans, f, g, sum;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	for (int i = 0; i < b.size() - 1; i++) {
		if (b[i] == d[i])
			ans++;
		n = b[2], m = d[2];
		f = int(n), g = int(m);
	}
	if (ans == 2)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (n != 'D' && n != 'F' && m != 'D' && m != 'F')
		cout << 1;
	else if ((n == 'D' || n == 'F') && (m == 'D' || m == 'F'))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if (f + 1 == g || f - 1 == g)
		cout << 1;
	else
		cout << 0;
	return 0;
}