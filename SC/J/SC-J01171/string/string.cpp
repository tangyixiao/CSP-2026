#include<bits/stdc++.h>
using namespace std;
long long Read() {
	long long x = 0, f = 1;
	char c;
	c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-') {
			f = -1;
		}
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = x * 10 + (c - '0');
		c = getchar();
	}
	return x*f;
}
const long long N = 2e5+5;
long long n, a[N], he = 0, lsum[N];
long long cnt = 0;
struct St {
	long long val;
	char c;
} b[N];
char c[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		he += a[i];
	}
	bool flag = 0;
	if (he % 2 == 1) {
		flag = 1;
	}
	he /= 2;
	long long ls = 0, cnt = 0, cnt2 = 0;
	while (ls + a[cnt + 1] <= he) {
		ls += a[++cnt];
		b[++cnt2].val = a[cnt];
		b[cnt2].c = c[cnt];
	}
	if (flag) {
		a[cnt + 1] -= 1;
	}
	b[++cnt2].val = (he - ls);
	b[cnt2].c = c[cnt + 1];;
	b[++cnt2].val = a[cnt + 1] - (he - ls);
	b[cnt2].c = c[cnt + 1];
	cnt += 1;
	while (cnt < n) {
		b[++cnt2].val = a[++cnt];
		b[cnt2].c = c[cnt];
	}
	int l = 1, r = cnt2;
	long long ans = 0, lsum = 0, rsum = 0;
	while (l <= r) {
		if (b[l].val < b[r].val) {
			if (b[l].c != b[r].c) {
				ans += b[l].val;
			}
			b[r].val -= b[l].val;
			lsum += b[l].val;
			l++;
		}
		if (lsum == he) {
			break;
		}
		if (b[r].val < b[l].val) {
			if (b[r].c != b[l].c) {
				ans += b[r].val;
			}
			b[l].val -= b[r].val;
			rsum += b[r].val;
			r--;
		}
		if (rsum == he) {
			break;
		}
		if (b[r].val == b[l].val) {
			if (b[r].c != b[l].c) {
				ans += b[r].val;
			}
			rsum += b[r].val;
			lsum += b[l].val;
			l++;
			r--;
		}
		if (rsum == he) {
			break;
		}
		if (lsum == he) {
			break;
		}
	}
	cout << ans;
	return 0;
}