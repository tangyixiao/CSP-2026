#include <bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	long long sum = 0;
	while (l <= r && l <= n && r >= 1) {
		if (c[l] != c[r]) {
			if (a[l] > a[r]) {
				a[l] -= a[r];
				sum += a[r];
				r--;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				sum += a[l];
				l++;
			} else {
				sum += a[l];
				l++;
				r--;
			}
		} else {
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
		}
		//cout << l << ' ' << r << "\n";
	}/*Trick||Treat!*/
	cout << sum;
	return 0;
}
