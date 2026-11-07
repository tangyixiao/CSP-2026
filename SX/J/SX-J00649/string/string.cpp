#include <bits/stdc++.h>
using namespace std;
int n, a[200010];
char c[200010];
long long sum = 0, ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		scanf("%d %c", &a[i], &c[i]);
		sum += a[i];
	}
	sum /= 2;
	for (int i = 1, j = n; sum > 0;) {
		if (i == j) {
			break;
		}
		if (c[i] != c[j]) {
			int x = min(a[i], a[j]);
			a[i] -= x;
			a[j] -= x;
			if (a[i] > a[j]) {
				--j;
			} else if (a[i] == a[j]) {
				++i;
				--j;
			} else {
				++i;
			}
			sum -= x;
			ans += x;
		} else {
			int x = min(a[i], a[j]);
			a[i] -= x;
			a[j] -= x;
			if (a[i] > a[j]) {
				--j;
			} else if (a[i] == a[j]) {
				++i;
				--j;
			} else {
				++i;
			}
			sum -= x;
		}
	}
	cout << ans;
	return 0;
}

