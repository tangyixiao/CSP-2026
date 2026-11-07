#include <bits/stdc++.h>
using namespace std;
int n, a[200010], l, r, l1, r1;
long long ans = 0, len = 0, t = 0;
char s[200001];
bool flag = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		len += long(a[i]);
	}
	if (len % 2 == 1) {
		flag = 1;
	}
	len /= 2;
	for (int i = 1; i <= n; i++) {
		long long t1 = t;
		t += a[i];
		if (t == len) {
			if (flag)
				a[i + 1] -= 1;
			break;
		} else if (t > len) {
			len -= t1;
			int aa = a[i];
			a[i] = len;
			aa -= len;
			if (flag) {
				aa -= 1;
			}
			int aaa;
			char cc = s[i], ccc;
			n += 1;
			for (int j = i + 1; j <= n; j++) {
				aaa = a[j];
				ccc = s[j];
				a[j] = aa;
				s[j] = cc;
				aa = aaa;
				cc = ccc;
			}

			break;
		}
	}
	l = 1;
	r = n;
	l1 = a[1];
	r1 = a[n];
	while (l < r) {
		int k = max(l1, r1) - min(l1, r1);
		if (s[l] != s[r]) {
			ans += min(l1, r1);
		}
		if (l1 > r1) {
			l1 = k;
			r1 = a[r - 1];
			r--;
		} else if (l1 < r1) {
			r1 = k;
			l1 = a[l + 1];
			l++;
		} else {
			r--;
			l++;
			r1 = a[r];
			l1 = a[l];
		}
	}
	cout << ans;
	return 0;
}
