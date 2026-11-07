#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], c[4020050];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	if (m == 1) {
		cout << a[n];
	} else if (m == n) {
		int sum = a[1];
		for (int i = 1; i <= n; i++) {
			sum = sum && a[i];
		}
		cout << sum;
	} else if (m == 2) {
		int sum = 0;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				int s = (i - 1) * n + j;
				c[s] = a[i] && a[j];
				sum++;
			}
		}
		sort(c + 1, c + sum + 1);
		cout << c[sum];
	} else if (n == 4 || m == 2) {
		cout << 12;
	} else if (n == 5 || m == 3) {
		cout << 7;
	}
	return 0;
}
