#include <bits/stdc++.h>
using namespace std;
bool aa, bb, cc, dd;
int a, b, c, d;
char s, ss;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b >> s >> c >> d >> ss;
	if (a == c && a != 1 && a != 16 && c != 16 && c != 1)
		aa = 1;
	if (aa) {
		if (b == d)
			bb = 1;
		if (s >= 'D' && bb) {
			if (ss >= 'D')
				cc = 1;
		}
		if (s <= 'C' && bb) {
			if (ss <= 'C')
				cc = 1;
		}
		if (s == char(int(ss) - 1) || s == char(int(ss) + 1)) {
			if (bb)
				dd = 1;
		}
		if (cc) {
			if (b == d - 1 || b == d + 1) {
				dd = 1;
			}
		}
	}
	cout << aa << bb << cc << dd;
	return 0;
}
