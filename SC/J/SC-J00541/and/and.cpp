#include <bits/stdc++.h>
using namespace std;
const int N = 200000;
int a[N + 5];
int n, k;
long long ans = LONG_LONG_MIN;
void dfs(int i, long long sum, int cnt) {
	if (i > n || cnt > k) {
		if (i == n + 1 && cnt == k) {
			ans = max(ans, sum);
			//cout << sum << endl;
		}
		return ;
	}
	if (cnt == 0) {
		dfs(i + 1, a[i], cnt + 1);
	} else {
		dfs(i + 1, (sum & a[i]), cnt + 1);
	} 
	dfs(i + 1, sum, cnt);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	stable_sort(a + 1, a + n + 1, [](int x, int y) {
		return x > y;
	});
	if (n >= 1000000) {
		int sum = a[1];
		for (int i = 2; i <= k; i++) {
			sum &= a[i];
		}
		cout << sum << endl;
	} else {
		dfs(1, 0, 0);
		cout << ans << endl;
	}
	return 0;
}