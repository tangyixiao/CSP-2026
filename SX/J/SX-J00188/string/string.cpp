#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, a[N], cnt, ans;
char c[N];
bool b = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		cnt += a[i];
	}
	cnt++;
	long long cnt1 = 0;
	for (int i = 1; i <= n; i++) {
		cnt1 += a[i];
		if (cnt1 == cnt / 2 && cnt % 2 == 0) {
			b = 1;
		}
		if (cnt1 >= cnt / 2) {
			cnt1 = i;
			break;
		}
	}
	cnt--;
	ans = cnt / 2;
	long long cnt3 = a[cnt1], z1 = cnt1, z2 = cnt1, l1 = a[z1], l2 = a[z2];
	char zf1 = c[cnt1], zf2 = c[cnt1];
	if (b) {
		z1 = cnt - 1;
	}
	while (z1 >= 1 && z2 <= n) {

		if (z1 == 1) {
			for (int i = z2 + 1; i <= n; i++) {
				if (zf1 == c[i]) {
					cnt3 += a[i];
				}
				l1 -= a[i];
				if (l1 <= 0) {
					break;
				}
			}
			break;
		}
		if (z2 == n) {
			for (int i = z1 - 1; i >= 1; i--) {
				if (zf2 == c[i]) {
					cnt3 += a[i];
				}
				l2 -= a[i];
				if (l2 <= 0) {
					break;
				}
			}
			break;
		}
		if (l1 > l2) {
			if (zf1 == zf2) {
				cnt3 += l2;
			}
			z2 = min(z2 + 1, n);
			l2 = a[z2];
			zf2 = c[z2];
			l1 -= l2;
		} else if (l2 > l1) {
			if (zf1 == zf2) {
				cnt3 += l1;
			}
			z1 = max(z1 - 1, (long long)1);
			l1 = a[z1];
			zf1 = c[z1];
			l2 -= l1;
		} else {
			if (zf1 == zf2) {
				cnt3 += l1;
			}
			z2 = min(z2 + 1, n);
			l2 = a[z2];
			zf2 = c[z2];
			z1 = max(z1 - 1, (long long)1);
			l1 = a[z1];
			zf1 = c[z1];
		}
	}
	cout << ans - cnt3;
	return 0;
}