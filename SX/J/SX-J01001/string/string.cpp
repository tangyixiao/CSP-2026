#include <bits/stdc++.h>
using namespace std;

char m[200005] = {};

int k[200005] = {};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int q = 1; q <= n; q++)
		cin >> k[q] >> m[q];
	long long sum = 0;
	int l = 1, r = n;
	while (l <= r) {
		if (m[l] == m[r]) {
			if (k[l] > k[r]) {
				k[l] -= k[r];
				r--;
			} else if (k[l] < k[r]) {
				k[r] -= k[l];
				l++;
			} else {
				l++;
				r--;
			}
		} else {
			if (k[l] > k[r]) {
				sum += k[r];
				k[l] -= k[r];
				r--;
			} else if (k[l] < k[r]) {
				sum += k[l];
				k[r] -= k[l];
				l++;
			} else {
				sum += k[l];
				l++;
				r--;
			}
		}
	}
	cout << sum;
	return 0;
}
