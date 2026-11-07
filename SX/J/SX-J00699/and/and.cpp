#include <bits/stdc++.h>
using namespace std;
int n, m, maxx = INT_MIN, a[10000];

int qp1() {
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		maxx = max(maxx, t);
	}
	return maxx;
}

int qp2() {
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			maxx = max(maxx, a[i] | a[j]);
		}
	}
	return maxx;
}

int qpn() {
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = a[i] | a[i - 1] ;
	}
	return maxx;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if (m == 1) {
		cout << qp1();
	} else if (m == 2) {
		cout << qp2();
	} else {
		cout << qpn();
	}
	return 0;
}
