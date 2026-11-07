#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b) {
	return a > b;
}
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	long long a[200005];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long x = 0, x1 = 0, y = 0, y1 = 0;
	sort(a, a + n, cmp);
	for (long long i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && x < m) {
			x++;
			x1 += a[i];
		}
		else if (a[i] % 2 == 1 && y < m){
			y++;
			y1 += a[i];
		}
	}
	long long ans;
	long long f = 0;
	long long x2 = 0, y2 = 0;
	if (x1 > y1) {
		for (long long i = 0; i < n; i++) {
			if (a[i] % 2 == 0 && x2 < m) {
				if (f == 0) {
					ans = a[i];
					f = 1;
				}
				else {
					ans = (ans and a[i]);
				}
			}
			x2++;
		}
	}
	else {
		for (long long i = 0; i < n; i++) {
			if (a[i] % 2 == 1 && y2 < m) {
				if (f == 0) {
					ans = a[i];
					f = 1;
				}
				else {
					ans = (ans & a[i]);
				}
			}
			y2++;
		}
	}
	cout << ans;
	return 0;
}

