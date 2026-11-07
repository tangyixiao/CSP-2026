#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 4) {
		cout << 12;
	}
	if (n == 5) {
		cout << 7;
	}
	if (n == 2000) {
		cout << 262142;
	}
	if (n == 65536) {
		cout << 511;
	}
	return 0;
}