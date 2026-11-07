#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, j;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n * 1.0 / 2; i++) {
		j = n;
		if (c[i] != c[j]) {
			if (a[i] == a[j])
				sum += a[i];
			else {
				sum = a[i] - a[j];
				if (sum < 0) {
					sum = 0 - sum;
					a[j] -= sum;
					if (c[j] != c[i + 1] && c[j] != c[j - 1])
						sum += a[j];
				}
				a[i] -= sum;
				if (c[i] != c[i + 1] && c[i] != c[j - 1])
					sum += a[i];

			}
		}
		j--;
	}
	cout << sum;
	return 0;
}
