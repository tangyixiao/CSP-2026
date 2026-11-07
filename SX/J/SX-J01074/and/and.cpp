#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int n, m, a[N];

bool cmp(int x, int y) {
	return x > y;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	//cout << n << "  " << m << '\n';
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	cout << a[m];
	return 0;
}
