#include <bits/stdc++.h>
using namespace std;
long long n, cnt, L = 1, R;

struct node {
	int l;
	char s;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].l >> a[i].s;
	}
	R = n;
	while (L < R) {
		if (a[L].s == a[R].s) {
			if (a[L].l < a[R].l) {
				a[R].l -= a[L].l;
				L++;
			} else if (a[R].l < a[L].l) {
				a[L].l -= a[R].l;
				R--;
			} else {
				L++;
				R--;
			}
		} else {
			if (a[L].l < a[R].l) {
				a[R].l -= a[L].l;
				cnt += a[L].l;
				L++;
			} else if (a[R].l < a[L].l) {
				a[L].l -= a[R].l;
				cnt += a[R].l;
				R--;
			} else {
				cnt += a[L].l ;
				cnt += a[R].l;
				L++;
				R--;
			}
		}
	}
	if (L == R)
		cnt += a[L].l;
	if (n % 2 == 0)
		cout << cnt / 2;
	else
		cout << (cnt + 1) / 2;
	return 0;
}