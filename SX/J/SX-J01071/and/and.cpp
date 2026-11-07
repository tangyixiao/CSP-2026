#include <bits/stdc++.h>;
using namespace std;
int a[34], m;
int b[200100];

int main() {
	freopen("and .in", "r", stdin);
	freopen("and .out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		b[i] = x;
		for (int j = 1; j <= 31; j++) {
			if ((x & 1) == 1) {
				a[j]++;
			}
			x = x >> 1;
		}
	}
	for (int i = 34; i >= 1; i--) {
		if (a[i] >= k) {
			m = i;
			break;
		}
	}
	int q = 0;
	for (int i = 0; i < m; i++) {
		q += pow(2, i);
	}
	for (int i = 1; i <= n; i++) {
		b[i] = (b[i] & q);
	}
	sort(b + 1, b + n + 1);
	int sum = b[n];
	for (int i = n; i >= n - k + 1; i--) {
		sum = (sum &b[i]);
	}
	cout << sum;
	return 0;
}
