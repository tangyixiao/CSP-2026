#include <bits/stdc++.h>
using namespace std;
long long n, m, num[200005], ans;

bool cmp(long long a, long long b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> num[i];
	}
	sort(num + 1, num + n + 1, cmp);
	ans = num[1];
	for (long long i = 2; i <= m; i++) {
		ans = ans &num[i];
	}
	cout << ans;
	return 0;
}
