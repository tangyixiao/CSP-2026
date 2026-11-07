#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, a[N], ans, b[N];

//void dfs(int k, int s) {
//if (k > m) {
//long long temp = b[1];

//for (int i = 2; i <= m; i++) {
//temp = temp &b[i];
//}
//cout << temp;
//ans = max(ans, temp);
//return;
//}

//for (int i = s; i <= n; i++) {
//b[k] = i;
//dfs(k + 1, s + 1);
//}
//}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				long long temp = a[i];
				temp = temp &a[j];
				ans = max(ans, temp);
			}
		}
	}

	dfs(1, 1);

	cout << ans;
	return 0;
}