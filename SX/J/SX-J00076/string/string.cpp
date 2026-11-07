#include <iostream>
#include <cstdio>
using namespace std;

struct pp {
	long long l, r;
	char c;
} a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	long long ans = 0;
	long long ii = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x >> a[i].c;
		if (i != 0)
			a[i].l = ii + 1;
		ii++;
		a[i].r = ii + x - 1;
		ii += x - 1;
	}
	long long len = a[n - 1].r + 1;
	for (long long i = 0; i < (len % 2 == 0 ? len / 2 : len / 2 + 1); i++) {
		long long w = len - i - 1;
		char x, y;
		for (int j = 0; j < n; j++) {
			if (i >= a[j].l && i <= a[j].r) {
				x = a[j].c;
				break;
			}
		}
		for (int j = n - 1; j >= 0; j--) {
			if (w >= a[j].l && w <= a[j].r) {
				y = a[j].c;
				break;
			}
		}
		if (x != y)
			ans++;
	}
	cout << ans;
	return 0;
}
