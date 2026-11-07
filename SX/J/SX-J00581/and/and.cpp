#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[2000000];

int main() {
	freopen("and5.in", "r", stdin);
	freopen("and5.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int maxx = 0, b;
	while (1) {
		for (int i = 0; i < n; i++) {
			for (int j = i ; j < m ; j++) {
				b = a[i] & a[j + m - 1];
			}
			if (maxx < b)
				maxx = b;
		}
		break;
	}
	cout << maxx;

	return 0;
}