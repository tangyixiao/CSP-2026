#include <bits/stdc++.h>
using namespace std;
long long n, tong[200005], sum;
char t[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> tong[i] >> t[i];
	}
	int l = 1, r = n;
	while (l < r) {
		while (tong[l]) {
			if (tong[l] >= tong[r]) {
				tong[l] -= tong[r];
				if (t[l] != t[r]) {
					sum += tong[r];
				}
				r--;
			} else {
				tong[r] -= tong[l];
				if (t[l] != t[r]) {
					sum += tong[l];
				}
				tong[l] = 0;
			}
		}
		l++;
	}
	cout << sum;
	return 0;
}