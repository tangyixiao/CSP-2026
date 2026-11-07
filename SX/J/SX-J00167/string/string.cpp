#include <bits/stdc++.h>
using namespace std;
long long n, a[10005], sum, l = 1, r;
char b[10005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	r = n;
	while (r > l) {
		if (a[l] > a[r]) {
			if (b[l] != b[r]) {
				sum += a[r];
			}
			a[l] -= a[r];
			r--;
		}
		if (a[l] < a[r]) {
			if (b[l] != b[r]) {
				sum += a[l];
			}
			a[r] -= a[l];
			l++;
		}
		if (a[l] == a[r]) {
			if (b[l] != b[r]) {
				sum += a[l] ;
			}
			r--;
			l++;
		}
	}
	cout << sum;
	return 0;
}
