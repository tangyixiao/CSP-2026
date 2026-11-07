#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
int n, m, a[N], ans = -1e9, b[N];

void dfs(int step, int sum) {
//	if (sum > m || step > n) {
//		ans = max(ans, tot);
//		return ;
//	}
	if (sum == m ) {
		int tot = b[1];
		for (int i = 2; i <= sum; i++)
			tot = tot & b[i];
		ans = max(tot, ans);
	}
	if (step > n)
		return ;
	b[sum + 1] = a[step];
	dfs(step + 1, sum + 1);
	b[sum + 1] = 0;
	dfs(step + 1, sum);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1,  0);
	cout << ans;
	return 0;
}
