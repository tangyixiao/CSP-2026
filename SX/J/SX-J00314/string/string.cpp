#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], sum = 0, sa[200010], sb[200010];
char c[200010];

long long aaa() {
	long long num = 0, t = 0, mun = n, x, y, ans = 0;
	while (num < sum) {
		x = num;
		y = mun;
		if (x % sb[mun] == 0 && t > 0)
			y--;
		num = sa[++t];
		if (num > sum)
			num = sum;
		for (long long i = n; i >= 1; i--) {
			if (sb[i] >= num) {
				mun = i;
				break;
			}
		}
		for (long long i = y; i >= mun; i--) {
			if (c[i] != c[t]) {

				if (i == y) {

					ans += sb[i] - x;
				} else if (i == mun) {

					ans +=   sb[i] - num;
				} else
					ans += a[i];
			}
		}
	}
	return ans;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sa[i] = a[i] + sa[i - 1];
		sum += a[i];
	}
	for (long long i = n; i >= 1; i--) {
		sb[i] = a[i] + sb[i + 1];
	}
	sum /= 2;
	cout << aaa();
	return 0;
}
