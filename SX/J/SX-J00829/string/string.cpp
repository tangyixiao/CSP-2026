#include <bits/stdc++.h>
using namespace std;
int a[200005];
string c[200005];
int qwe

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	if (n == 1) {
		cout << 0;
		return 0;
	}
	if (n == 2) {
		if (c[0] == c[1]) {
			cout << 0;
			return 0;
		} else {
			cout << min(a[0], a[1]);
			return 0;
		}
	}
	return 0;
}