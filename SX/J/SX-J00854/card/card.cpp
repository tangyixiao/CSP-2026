#include <bits/stdc++.h>
using namespace std;
int n, m, sum, num;
int a[10010], b[10010], c[10010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	if (m == 1) {
		cout << n;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a + 1, a + n + 1);
	sum = a[1], num = a[n];
	if (sum == b[1]) {
		cout << n << " ";
		cout << n - 2;
	} else {
		cout << n - 2 << " " ;
		cout << n;
	}
	return 0;
}
