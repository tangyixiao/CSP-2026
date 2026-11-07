#include <bits/stdc++.h>

using namespace std;
const int SZ = 2e5 + 5;

int n;
long long a[SZ];
char c[SZ];
long long cnt = 0;

int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	
	int l = 1, r = n;
	while (l < r) {
		if (a[l] > a[r]) {
			if (c[l] != c[r]) cnt += a[r];
			a[l] -= a[r];
			a[r] = 0;
			r--;
		} else {
			if (c[l] != c[r]) cnt += a[l];
			a[r] -= a[l];
			a[l] = 0;
			l++;
		}
	}
	
	cout << cnt;
	return 0;
}