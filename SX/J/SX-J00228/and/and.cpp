#include <bits/stdc++.h>
using namespace std;
long long n, m, mmax;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		long long b;
		cin >> b;
		mmax = max(mmax, b);
	}
	cout << mmax;
	return 0;
}