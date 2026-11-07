#include <bits/stdc++.h>
using namespace std;
long long t, a[1000005], sum;
char c[1000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a[i] >> c[i];
	}
	long long l = 1, r = t;
	while (l < r) {
		if (c[l] == c[r]) {
			if (a[l] > a[r]) {
				a[l] -= a[r];
				r--;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				l++;
			} else {
				l++;
				r--;
			}
		} else {
			if (a[l] > a[r]) {
				sum += a[r];
				a[l] -= a[r];
				r--;
			} else if (a[l] < a[r]) {
				sum += a[l];
				a[r] -= a[l];
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

