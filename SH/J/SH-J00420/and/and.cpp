#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, m, a[MAXN], ans;
void dfs(int x, int sum, int cnt){
	if (x == n + 1){
		if (cnt == m) ans = max(ans, sum);
		return;
	}
	if (cnt == 0) dfs(x + 1, a[x], cnt + 1);
	else dfs(x + 1, (sum & a[x]), cnt + 1);
	dfs(x + 1, sum, cnt);
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	dfs(1, 0, 0);
	cout << ans;
	return 0;
}
