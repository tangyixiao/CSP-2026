#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long a[N];
char b[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	long long cnt = 0;
	long long k = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		cin >> b[i];
		k += a[i];
	}
	k /= 2;
	long long t = 0, l = 1, r = n;
	char g1 = b[1], g2 = b[n];
	while (t < k) {
		g1 = b[l];
		g2 = b[r];
		if (a[l] >= a[r]) {
			t += a[r];
			if (g1 != g2) {
				cnt += a[r];
			}
			a[l] -= a[r];
			r--;
		} else if (a[l] == a[r]) {
			t += a[l];
			if (g1 != g2) {
				cnt += a[l];
			}
			l++;
			r--;
		} else if (a[l] < a[r]) {
			t += a[l];
			if (g1 != g2) {
				cnt += a[l];
			}
			a[r] -= a[l];
			l++;
		}
	}
	cout << cnt;
	return 0;
}