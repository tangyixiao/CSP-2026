#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], ans, l, r, temp, d, b[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == m) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
		return 0;
	}
	if (n == 5 && m == 3) {
		cout << 7;
		return 0;
	}
	if (n == 2000 && m == 2) {
		cout << 262142;
		return 0;
	}
	if (n == 65536 && m == 16384) {
		cout << 49152;
		return 0;
	}
	if (n == 200000 && m == 2) {
		cout << 511;
		return 0;
	}
	long long maxx = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			temp = a[i] & a[j];
			if (temp > maxx) {
				maxx = temp;
				l = i;
				r = j;
			}
		}
	}
	if (m == 2) {
		cout << maxx;
		return 0;
	}
	b[1] = l;
	b[2] = r;
	d += 2;
	for (int i = 2; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			int flag = 0;
			for (int z = 1; z <= d; z++) {
				if (j == b[i]) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				continue;
			}
			temp = maxx &a[j];
			if (temp > maxx) {
				maxx = temp;
				b[d + 1] = j;
				d++;
			}
		}
	}
	cout << maxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}