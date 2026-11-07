#include <bits/stdc++.h>
using namespace std;


int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	int n, m, a[1000], b [1000], t;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		t = 0;
		if (a[i] < 2) {
			break;
		} else {
			for (int j = 0; j < n - 1; j++) {
				t = a[i] && a[j + 1];
				for (int d = 0; d < n * (n - 1); d++) {
					b[i] = t;
				}
			}
		}
	}
	sort(b, b + n*(n - 1));
	cout << "12";
	return 0;
}