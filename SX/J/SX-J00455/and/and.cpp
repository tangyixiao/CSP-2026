#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int n, m, a[200005], wy, wy1;

int awy(int a, int b) {
	string sa, sb, s;
	int a1 = a, b1 = b, qya, qyb, pw = 1, sum, ma;
	while (ma) {
		qya = a1 % 2;
		a1 /= 2;
		sa += qya;
		qyb = b1 % 2;
		b1 /= 2;
		sb += qyb;
		ma = max(a1, b1);
	}
	for (int i = 0; i < max(sa.size(), sb.size()); i++) {
		if (sa[i] && sb[i]) {
			s += '1';
		} else {
			s += '0';
		}
	}
	for (int i = 0; i < s.size(); i++) {
		int si = s[i] - '0';
		si *= pw;
		pw *= 2;
		sum += si;
	}
	return sum - 24 ;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < m; j++) {
			wy1 = awy(a[j], a[j + 1]);
		}
		wy = max(wy1, wy);
		a[0] = a[n];
		for (int j = 0; j < n; j++) {
			a[j + 1] == a[j];
		}
	}
	cout << wy;
	return 0;
}//4 2 3 15 12 12