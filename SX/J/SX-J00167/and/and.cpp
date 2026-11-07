#include <bits/stdc++.h>
using namespace std;
long long n, m, ans, a[200005], b[200005], c[200005], sum, mmax;

void aaa(int x) {
	if (x == m) {
		sum = c[1];

		for (int i = 2; i <= m; i++) {

			sum &= c[i];
		}

		mmax = max(mmax, sum);
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 0 ) {
			b[i] = 1;
			c[x] = a[i];

			aaa(x + 1);

			b[x] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	aaa(1);
	cout << mmax;
	return 0;
}
