#include <bits/stdc++.h>
using namespace std;

int n;

struct ps {
	long long l;
	char z;
} a[200010];
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int zss;
	char zsz;
	for (int i = 1; i <= n; i++) {
		cin >> zss >> zsz;
		a[i].l = zss;
		a[i].z = zsz;
	}
	int zi = 1, zj = n;
	while (zi <= zj) {
		if (a[zi].l > a[zj].l) {
			if (a[zi].z != a[zj].z)
				ans += a[zj].l;
			a[zi].l -= a[zj].l;
			zj--;
		} else if (a[zi].l < a[zj].l) {
			if (a[zi].z != a[zj].z)
				ans += a[zi].l;
			a[zj].l -= a[zi].l;
			zi++;
		} else if ((a[zi].l == a[zj].l)) {
			if (a[zi].z != a[zj].z)
				ans += a[zi].l;
			zi++;
			zj--;
		}
	}
	cout << ans;
	return 0;
}
