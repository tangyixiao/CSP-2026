#include <bits/stdc++.h>
using namespace std;
int a[30][30];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	long long n, m, v, b, f2 = 0, f3_1 = 0, f3_2 = 0, f4 = 0;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	n = (s1[0] - '0') * 10 + (s1[1] - '0');
	m = s1[2] - 64;
	v = (s2[0] - '0') * 10 + (s2[1] - '0');
	b = s2[2] - 64;
	a[n][m] = 1;
	a[v][b] = 1;
	if (n == v) {
		f2 = 1;
	}
	if (f2 == 1) {
		if (m <= 3 && b <= 3) {
			f3_1 = 1;
		}
		if (m >= 4 && b >= 4) {
			f3_2 = 1;
		}
	}
	if (f3_1 == 1) {
		if (m - 1 == b) {
			f4 = 1;
		}
		if (m + 1 <= 3) {
			if (m + 1 == b) {
				f4 = 1;
			}
		}
	}
	cout << 1 << f2 << (f3_1 || f3_2) << f4;
	return 0;
}