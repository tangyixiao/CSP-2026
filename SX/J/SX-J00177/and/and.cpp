#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m, a[N], ans = -1;

void dfs(int k, int sum, int x) {
	if (k == m) {
		ans = max(ans, sum);
	}
	for (int i = x + 1; i <= n; i++) {
		sum = (sum &a[i]);
		dfs(k + 1, (sum &a[i]), i + 1);
	}
}

int main() {
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		dfs(1, a[i], i);
	}
	cout << ans;
	return 0;
}
