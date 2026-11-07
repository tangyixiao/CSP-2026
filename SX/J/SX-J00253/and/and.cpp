#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m;
long long a[N], ans;

bool cmp(long long p, long long q) {
	return p > q;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	ans += a[1] & a[2];
	for (int i = 3; i <= m; i++) {
		ans = ans &a[i];
	}
	cout << a[m];
	return 0;
}
