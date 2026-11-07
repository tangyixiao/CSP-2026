#include <bits/stdc++.h>
using namespace std;
long long n, x, s = 0, o = 1;
string a, y, b;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		for (int j = 1; j <= x; j++) {
			a += y;
		}
	}
//	if (a.size() % 2 != 0) {
//		b = a.size() / 2;
//		for (int i = 1; i <= a.size() / 2; i++) {
//			if (a[b] != a[b - o])
//				s++;
//			b++;
//			o += 2;
//		}
//	} else {
//		b = (a.size() - 1) / 2;
//		for (int i = 1; i <= (a.size() - 1) / 2; i++) {
//			if (a[b + i] != a[b - i])
//				s++;
//		}
//	}
	for (int i = 0; i <= a.size() - 1; i++) {
		b[a.size() - i - 1] = a[i];
	}
	for (int i = 0; i <= a.size() - 1; i++) {
		if (a[i] != b[i]) {
			s++;
		}
	}
	cout << s / 2;
	return 0;
}

