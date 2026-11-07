#include <bits/stdc++.h>

#define int long long
using namespace std;
const int N = 2e5+10;

int n, m;
int a[N];

signed main() {
//
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {

		cin >> a[i];

	}

	sort(a + 1, a + 1 + n);

	cout << a[n - m + 1];

//	int sum;
//
//	sum = a[n] && a[n - 1];
//
//	for (int i = n - 2; i >= m; i--) {
//
//		sum = sum&&a[i];
//
//	}
//	cout << sum;
	return 0;
}
