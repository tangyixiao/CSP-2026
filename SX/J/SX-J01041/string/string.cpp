#include <bits/stdc++.h>
using namespace std;
int a[10000005];
char b[10000005];
char c[10000005];
long long n;
long long sum = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	long long k = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i]; j++) {
			k++;
			c[k] = b[i];

		}
	}
	long long x = k / 2;
	if (k % 2 == 0) {
		for (int i = 0; i < x; i++) {
			if (c[i] != c[k - i]) {
				sum++;
			}
		}
	} else {
		for (int i = 0; i <= x; i++) {
			if (c[i] != c[k - i]) {
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
