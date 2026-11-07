#include <bits/stdc++.h>
using namespace std;
int n, m, a[200020], k, f;

void t(int c) {
	if (k == m) {

	}
	for (int i = 1; i <= n; i++) {
		k++;
		t(c);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		t(a[i]);
	}
	return 0;
}