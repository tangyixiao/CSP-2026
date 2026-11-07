#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long a[n + 3];
	char b[n + 3];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	long long sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (b[i] == b[n - i + 1]) {
			sum += 0;
		} else {
			sum += a[n - i + 1];
		}
	}
	cout << sum;
	return 0;
}
