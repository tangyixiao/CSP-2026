#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
long long n, a[1000005], sum = 0, b[1000005];
long long mid;
string c[1000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	mid = n / 2 + (n % 2 == 1);
	for (int i = 1; i <= n; i++) {
		if (l >= mid and r <= mid)
			break;
		if (c[l] != c[r]) {
			sum += min(a[l], a[r]);
		}
		if (a[l] < a[r]) {
			a[r] -= a[l];
			l++;
		}
		if (a[l] == a[r]) {
			l++;
			r--;
		}
		if (a[l] > a[r]) {
			a[l] -= a[r];
			r--;

		}
	}
	cout << sum;
	return 0;
}
