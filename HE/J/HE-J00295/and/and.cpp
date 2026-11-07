#include<bits/stdc++.h>
using namespace std; 
const int N = 2e5 + 5;
int n, m;
int a[N], b[N];
int maxn, id;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > maxn) {
			maxn = a[i];
		}
	}
	int ans = maxn;
	sort(a + 1, a + n + 1);
	for (int i = n; i >= 1; i--) {
		m--;
		ans &= a[i];
		if (m == 0) break;
	}
	cout << ans;
	return 0;
}
