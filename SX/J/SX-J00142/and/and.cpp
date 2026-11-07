#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200205];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	if (m == n) {
		long long mybox = 0;
		scanf("%lld", &a[1]);
		mybox = a[1];
		for (int i = 2; i <= n; i++) {
			scanf("%lld", &a[i]);
			mybox = (mybox &a[i]);
		}
		printf("%lld", mybox);
	} else if (m == 2) {
		long long mymax = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%lld", &a[i]);
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				mymax = max((a[i] & a[j]), mymax);
			}
		}
		printf("%lld", mymax);
	} else {
		long long mymax = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%lld", &a[i]);
			mymax = max(mymax, a[i]);
		}
		printf("%lld", mymax);
	}
	return 0;
}
