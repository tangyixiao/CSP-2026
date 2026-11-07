#include <bits/stdc++.h>
#define ll long long
using namespace std;
char a, b, c, d, e, f, g, h;
ll a2, b2, c2, d2;
bool a1, b1, c1, d1;
char n, m;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d >> n >> e >> f >> g >> h >> m;
	a2 = (int)(a - '0') * 10 + (int)(b - '0');
	b2 = (int)(c - '0') * 10 + (int)(d - '0');
	c2 = (int)(e - '0') * 10 + (int)(f - '0');
	d2 = (int)(g - '0') * 10 + (int)(h - '0');
	if (a2 != c2) {
		cout << "0000";
		return 0;
	} else if (b2 != d2) {
		cout << "1000";
		return 0;
	} else if (!(('A' <= n && n <= 'C' && 'A' <= m && m <= 'C') || ((n == 'D' && m == 'F') || (n == 'F' && m == 'D')))) {
		cout << "1100";
		return 0;

	} else if ((abs(int(n) - int(m)) == 1 && n != 'D' && m != 'D') || ((n == 'D' && m == 'F') || (n == 'F' && m == 'D'))) {
		cout << "1111";
		return 0;
	} else
		cout << "1110";
	return 0;
}
