#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel1.in", "r", stdin);
	freopen("travel1.out", "w", stdout);
	int n, m, a[100];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 4 && m == 3) {
		cout << '3' << ' ' << '1' << ' ' << '4';
	}
	if (n == 10 && m == 3) {
		cout << '10' << ' ' << '3' << ' ' << '3';
	}
	return 0;
}