#include <bits/stdc++.h>
using namespace std;
long long n, q = 0, l = 0, x = 0, y = 0;

struct www {
	long long a;
	char c;
}
z[20005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> z[i].a >> z[i].c;
		l += z[i].a;
	}
	for (;;) {
		if (x + y >= n)
			break;
		if (z[x].c == z[n - y - 1].c) {
			if (z[x].a >= z[n - y - 1].a) {
				z[x].a -= z[n - y - 1].a;
				y++;
			} else {
				z[n - y - 1].a -= z[x].a;
				x++;
			}
		}
		if (z[x].c != z[n - y - 1].c) {
			if (z[x].a >= z[n - y - 1].a) {
				z[x].a -= z[n - y - 1].a;
				q += z[n - y - 1].a;
				y++;
			} else {
				z[n - y - 1].a -= z[x].a;
				q += z[x].a;
				x++;
			}
		}
	}
	cout << q;
	return 0;
}
