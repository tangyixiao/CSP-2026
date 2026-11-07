#include <bits/stdc++.h>
using namespace std;
int n;
int h[200010];
char a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> h[i] >> a[i];
	}
	int l = 1, r = n;
	long long m = 0;
	while (l < r) {
		if (a[l] != a[r]) {
			m += min(h[l], h[r]);
			if (h[l] > h[r]) {
				h[l] -= h[r];
				r--;
			} else if (h[l] < h[r]) {
				h[r] -= h[l];
				l++;
			} else {
				r--;
				l++;
			}
		} else {
			if (h[l] > h[r]) {
				h[l] -= h[r];
				r--;
			} else if (h[l] < h[r]) {
				h[r] -= h[l];
				l++;
			} else {
				r--;
				l++;
			}
		}
	}
	cout << m;
	return 0;
}