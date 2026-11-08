#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], max_ = INT_MIN;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n - m + 1; i++) {
		int cnt = a[i];
		for (int j = i + 1; j <= i + m - 1; j++) {
			cnt = cnt & a[j];
		}
		max_ = max(max_, cnt);
	} 
	cout << max_;
}
