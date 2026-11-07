#include <bits/stdc++.h>
using namespace std;
int n, a[100], c[100], minn = 10;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> c[i];
		}
		cout << '0';
		return 0;
	}
	if (n == 2) {
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> c[i];
			if (a[i] < minn) {
				minn = a[i];
			}
		}
		cout << minn;
		return 0;
	}
	return 0;
}
