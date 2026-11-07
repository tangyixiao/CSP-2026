#include <bits/stdc++.h>
using namespace std;
long long n, a[100005];
char k[100005];
long long sum, l, r, b, s;
bool w = 1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	cin >> a[1] >> k[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i] >> k[i];
		if (k[i] != k[i - 1]) {
			w = 0;
		}
	}
	if (w == 1) {
		cout << 0;
		return 0;
	}
	l = 1;
	r = n;
	while (l < r) {
		if (a[l] == a[r] && k[l] == k[r]) {
			l++, r--;
			continue;
		} else if (a[l] == a[r] && k[l] != k[r]) {
			sum += a[l];
			l++, r--;
			continue;
		}
		if (a[l] < a[r]) {
			if (k[l] != k[r])
				sum += a[l];
			a[r] -= a[l];
			l++;
		} else if (a[l] > a[r]) {
			if (k[l] != k[r])
				sum += a[r];
			a[l] -= a[r];
			r--;
		}
	}
	cout << sum;
	return 0;
}
