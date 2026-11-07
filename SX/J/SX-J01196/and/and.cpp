#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, a[10000000000000001];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n; i++) {
		if (a[i] < a[n]) {
			cout << a[n] << " ";
			break;
		} else {
			cout << a[i] << " ";
			break;
		}
	}
	return 0;
}