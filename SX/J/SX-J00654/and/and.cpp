#include <bits/stdc++.h>
using namespace std;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	long long maxx = -1, sum = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = n; i >= 1; i--) {
		sum = a[i];
		for (int j = i; j >= i - m; j--) {
			sum = sum &a[j];
		}
		maxx = max(maxx, sum);
		sum = 0;
	}
	cout << maxx;
	return 0;
}
