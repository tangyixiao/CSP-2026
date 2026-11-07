#include <bits/stdc++.h>
using namespace std;

struct gd {
	long long a;
	char c;
} p[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, len = 0, l = 1, r, ans = 0;
	cin >> n;
	r = n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i].a >> p[i].c;
		len += p[i].a;
	}
	while (l <= r) {
		if (p[l].a < p[r].a) {
			if (p[l].c != p[r].c) {
				ans += p[l].a;
			}
			p[r].a -= p[l].a;
			l++;
		} else if (p[l].a > p[r].a) {
			if (p[l].c != p[r].c) {
				ans += p[r].a;
			}
			p[l].a -= p[r].a;
			r--;
		} else {
			if (p[l].c != p[r].c) {
				ans += p[r].a;
			}
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
