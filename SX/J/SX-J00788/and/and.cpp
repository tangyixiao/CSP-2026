#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m, ans;
int a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1, greater<int>());
	ans = a[1];
	for (int i = 2; i <= m; i++) {
		ans = ans &a[i];
	}
	cout << ans;
	return 0;
}