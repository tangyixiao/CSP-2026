#include <bits/stdc++.h>
using namespace std;
long long h[200010];
char a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	if (n == 1) {
		cout << '0';
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> h[i] >> a[i];
	}
	long long cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (a[i - 1] != a[i]) {
			if (h[i] >= h[i - 1]) {
				cnt += h[i];
			} else {
				cnt += h[i - 1];
			}
		}
	}
	cout << cnt;
	return 0;
}