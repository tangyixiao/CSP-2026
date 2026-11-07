#include <bits/stdc++.h>
using namespace std;
long long n, ans;

struct node {
	long long s;
	char x;
} a[200005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++)
		cin >> a[i].s >> a[i].x;
	long long r = n;
	for (long long l = 1; l < r;) {
		if (a[l].s > a[r].s) {
			if (a[l].x != a[r].x)
				ans += a[r].s;
			a[l].s -= a[r].s;
			r--;
		} else if (a[l].s < a[r].s) {
			if (a[l].x != a[r].x)
				ans += a[l].s;
			a[r].s -= a[l].s;
			l++;
		} else {
			if (a[l].x != a[r].x)
				ans += a[l].s;
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}