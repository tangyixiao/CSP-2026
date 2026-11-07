#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long a[200005];
	char c[200005];
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	long long l = 1, r = n, sum = 0;
	while (l < r) {
		if (a[l] > a[r]) {
			a[l] -= a[r];
			if (c[l] != c[r])
				sum += a[r];
			r--;
		} else if (a[l] < a[r]) {
			a[r] -= a[l];
			if (c[l] != c[r])
				sum += a[l];
			l++;
		} else {
			if (c[l] != c[r])
				sum += a[l];
			r--;
			l++;
		}
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}