#include <bits/stdc++.h>
using namespace std;
int n, a[200010], sum, k = 1, as;
char c[200010];
bool b = 1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (c[1] != c[i]) {
			b = 0;
		}
	}
	if (b == 1) {
		cout << "0";
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		as += a[i];
	}
	char c1[as + 10];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			c1[k] = c[i];
			k++;
		}
	}
	for (int i = 1; i <= k / 2; i++) {
		if (c1[i] != c1[k - i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
