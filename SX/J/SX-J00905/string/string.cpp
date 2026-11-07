#include <bits/stdc++.h>
using namespace std;
string s, t, b;
int a[100000009];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, x, sun = 0;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		sum = sum + a[i];
	}
	cout << sum << " ";
	if (sum % 2 == 1) {
		x = (sum - 1) / 2;
	} else {
		x = sum / 2;
	}
	cout << x;
	return 0;
}
