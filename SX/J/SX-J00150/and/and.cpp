#include <bits/stdc++.h>
using namespace std;
long long n, m, l = 1, mxx;

struct xxx {
	long long x, y;
} a[200005];

bool cmp(xxx x, xxx y) {
	if (x.y != y.y)
		return x.y > y.y;
	else
		return x.x > y.x;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x;
		a[i].y = 0;
		long long t = a[i].x;
		while (t != 0) {
			a[i].y += (t % 2);
			t /= 2;
		}
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		if (a[i].x == a[i - 1].x)
			l++;
		else
			l = 1;
		if (l == m)
			mxx = max(mxx, a[i].x);
	}
	auto mx = a[1].x;
	for (int i = 2; i <= m; i++)
		mx = mx & a[i].x;
	cout << max(mx, mxx) << endl;
	return 0;
}
