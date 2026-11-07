#include <bits/stdc++.h>
using namespace std;

int n, a[] = {n}, c[] = {n};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	long long t = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++) {
			t += c[i] * j;
		}
	}
	long long S[] = {t};
	int sum = 0;
	for (int k = 1; k <= n; k++) {
		int y = t - k + 1;
		if (S[k] != S[y]) {
			sum ++;
		}
	}
	cout << sum;

	return 0;
}