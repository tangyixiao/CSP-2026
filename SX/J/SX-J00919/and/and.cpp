#include <bits/stdc++.h>
using namespace std;
int a[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	long long t = a[n];
	for (long long i = n - 1; i > n - m; i--) {
		t = t &a[i];
	}
	cout << t;
	return 0;
}

