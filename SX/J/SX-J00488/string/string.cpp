#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
int n;
int a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long l = 0, r = n - 1, s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	while (l < r) {
		if (a[r] == 0) {
			r--;
		}
		if (a[l] == 0) {
			l++;
		}
		int z = min(a[l], a[r]);
		if (c[l] != c[r]) {
			s += z;
		}
		a[l] -= z;
		a[r] -= z;
	}
	cout << s;
	return 0;
}
