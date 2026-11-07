#include <bits/stdc++.h>
using namespace std;
long long n, c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	char b[n + 3] = {};
	long long a[n + 3] = {};
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		c += a[i];
		if (b[i] == b[i - 1]) {
			a[i] += a[i - 1];
			a[i - 1] = 0;
		}
	}
	long long cnt = 0, j = n - 1;
	for (int i = 0; i < c / 2; i++) {
		if (a[i] != 0 && a[j] != 0) {
			if (a[i] == a[j]) {
				if (b[i] != b[j])
					cnt += a[i];
			} else {
				if (b[i] == b[j])
					cnt += abs(a[i] - a[j]);
			}
		} else if (a[i] == 0 && a[j] == 0) {
			j--;
			continue;
		} else if (a[i] == 0)
			continue;
		else
			j--;
	}
	printf("%lld", cnt);
	return 0;
}
