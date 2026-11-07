#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, r, l;
long long ans, t;

struct Node {
	long long c;
	char s;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i].c);
		cin >> a[i].s;
	}
	l = 1, r = n;
	while (l <= r) {
		if (a[l].s != a[r].s) {
			t = min(a[l].c, a[r].c);
			ans += min(a[l].c, a[r].c);
			a[l].c -= t;
			a[r].c -= t;
			if (a[l].c <= 0) {
				l++;
			}
			if (a[r].c <= 0) {
				r--;
			}
		} else {
			t = min(a[l].c, a[r].c);
			a[l].c -= t;
			a[r].c -= t;
			if (a[l].c <= 0) {
				l++;
			}
			if (a[r].c <= 0) {
				r--;
			}
		}

	}
	cout << ans;
	return 0;
}