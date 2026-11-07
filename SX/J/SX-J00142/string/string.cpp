#include <bits/stdc++.h>
using namespace std;
long long a[250005], n, box;
char b[250005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		cin >> b[i];
	}
	for (int i = 1, j = n;;) {
		if (i >= j) {
			break;
		}
		if (a[i] < a[j]) {
			if (b[i] != b[j]) {
				box += a[i];

			}
			a[j] -= a[i];
			i++;
		} else if (a[i] == a[j]) {
			if (b[i] != b[j]) {
				box += a[i];
			}
			i++;
			j--;
		} else {
			if (b[i] != b[j]) {
				box += a[j];

			}
			a[i] -= a[j];
			j--;
		}
	}
	printf("%lld", (long long)(box));
	return 0;
}
