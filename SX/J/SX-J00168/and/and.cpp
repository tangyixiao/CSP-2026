#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[j] > a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
	cout << a[m - 1];
	return 0;
}
