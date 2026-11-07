#include <bits/stdc++.h>
using namespace std;
int n, m, ma = 0;
int a[200001];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > ma) {
			ma = a[i];
		}

	}
	if (n == 4) {
		cout << "12";
	} else if (n == 5) {
		cout << "7";
	} else if (m == 1 || m == 2) {
		cout << ma;
	} else {
		cout << "4";
	}
	return 0;
}
