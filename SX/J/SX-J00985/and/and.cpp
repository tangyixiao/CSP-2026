#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, a[N], l;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		l = max(l, a[i]);
	}
	cout << l;
	return 0;
}