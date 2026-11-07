#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long a[200005] = {};
	char b[200005] = {};
	long long sum = 0, sum1 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
		sum1 += a[i];
		if (b[i] == b[i - 1]) {
			sum++;
		}

	}
	if (sum == n - 1) {
		cout << "0";
	} else {
		cout << sum1 / 2;
	}
	return 0;
}
