#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	int x = a[0];
	for (int i = 0; i < m - 1; i++) {
		x = min(x, a[i + 1]);
	}
	cout << x;
	return 0;
}
