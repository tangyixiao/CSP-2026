#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
char c[1000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	long long l = 1, r = n;
	while (l < r) {
		if (c[l] == c[r]) {
			if (a[l] > a[r]) {
				a[l] = a[l] - a[r];
				r--;
			} else if (a[l] < a[r]) {
				a[r] = a[r] - a[l];
				l--;
			} else {
				l++;
				r--;
			}
		} else {
			if (a[l] > a[r]) {
				a[l] = a[l] - a[r];
				sum += a[r];
				r--;
			} else if (a[l] < a[r]) {
				a[r] = a[r] - a[l];
				sum += a[l];
				l++;
			} else {
				sum += a[l];
				l++;
				r--;

			}
		}
	}
	cout << sum;
	return 0;
}
