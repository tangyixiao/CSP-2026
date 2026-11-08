#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

template <typename T>
inline bool between(const T& val, const T& left, const T& right) {
	return left <= val && val <= right;
}

template <typename T>
inline T abs(const T& a) { return a < 0 ? -a : a; }

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c) {
		putchar('1');
		if (b[0] == d[0] && b[1] == d[1]) {
			putchar('1');
			if (between(b[2], 'A', 'C') == between(d[2], 'A', 'C')) {
				putchar('1');
				if (between(b[2], 'A', 'C') && ::abs((int)b[2] - d[2]) == 1 ||
					(b[2] > 'C') && (d[2] > 'C')) {
					putchar('1');
				} else putchar('0');
			} else printf("00");
		} else printf("000");
	} else printf("0000");
	return 0;
}

