#include <bits/stdc++.h>
using namespace std;

int n, m, a[200010], max1, max2;



int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < n; j++) {
			int t;
			if (a[j] < a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	cout << a[m];
	return 0;
}
