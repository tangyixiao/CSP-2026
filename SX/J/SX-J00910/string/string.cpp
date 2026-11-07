#include <bits/stdc++.h>
using namespace std;
long long n, l, ans, l1;

struct _ {
	char c1, c2;
	long long i1, i2;
} b[200001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i].i1 >> b[i].c1 ;
		l += b[i].i1;
		b[i].i2 = b[i].i1;
	}
	l1 = l / 2;
	int ia = 1, ib = n;
	while (l > l1) {
		if (b[ia].i2 == 0) {
			ia++;
		}
		if (b[ib].i2 == 0) {
			ib--;
		}
		if (b[ia].c1 != b[ib].c1) {
			if (b[ia].i2 >= b[ib].i2) {
				l -= b[ib].i2;
				ans += b[ib].i2;
				b[ia].i2 -= b[ib].i2;
				b[ib].i2 = 0;
			} else if (b[ia].i2 < b[ib].i2 ) {
				l -= b[ia].i2;
				ans += b[ia].i2;
				b[ib].i2 -= b[ia].i2;
				b[ia].i2 = 0;
			}
		} else if (b[ia].c1 == b[ib].c1) {
			if (b[ia].i2 >= b[ib].i2) {
				l -= b[ib].i2;
				b[ia].i2 -= b[ib].i2;
				b[ib].i2 = 0;
			} else if (b[ia].i2 < b[ib].i2 ) {
				l -= b[ia].i2;
				b[ib].i2 -= b[ia].i2;
				b[ia].i2 = 0;
			}
		}
	}
	cout << ans;
	return 0;
}