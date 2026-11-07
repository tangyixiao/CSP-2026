#include <bits/stdc++.h>
using namespace std;
int n;

struct m {
	int c;
	char s;
};
m a[2000005];
int l, r;
int minn;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].c >> a[i].s;
	}
	l = 1, r = n;
	while (l < r) {
		minn = min(a[l].c, a[r].c);
		if (a[l].s != a[r].s) {
			ans += minn;
		}
		a[l].c -= minn;
		a[r].c -= minn;
		if (a[l].c == 0) {
			l++;
		}
		if (a[r].c == 0) {
			r--;
		}
	}
	cout << ans;
	return 0;
}
