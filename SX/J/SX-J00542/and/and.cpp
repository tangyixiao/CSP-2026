#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, sum = 0, mmax = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			sum = (a[j] & a[j + 1]);

		}
		if (sum > mmax)
			mmax = sum;
	}
	cout << mmax;
	return 0;
}


