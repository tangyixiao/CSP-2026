#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n, m, max = 0, len = 0;
	cin >> n >> m;
	int a[100005];
	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		if (len < m) {
			a[len = ai];
			len++;
		} else {
			int sum = ai, min = 0;
			for (int j = 0; j < m; j++) {
				if ((sum & a[j]) < (sum & a[min]))
					min = j;
				sum = sum &a[j];
				if (sum > max)
					break;
			}
			if (sum > max) {
				a[min] = ai;
				max = sum;
			}
		}
	}
	cout << max;

	return 0;
}