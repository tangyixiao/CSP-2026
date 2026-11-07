#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, m;
long long a[N];
bool vis[N];
long long ans = -1;
void dfs(int q, long long w) {
	if (q == m+1){
		ans = max(ans, w);
		return;
	}
	for (int i = 1; i <= n; i ++) {
		if (!vis[i]) {
			vis[i] = 1;
			if (q == 1) dfs(q + 1, a[i]);
			else dfs(q + 1, w & a[i]);
			vis[i] = 0;
		}
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	long long maxn = -1, sum = 0;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
		maxn = max(maxn, a[i]);
		if (i == 1) sum = a[i];
		else sum &= a[i];
	}
	if (m == 1) ans = maxn;
	else if (m == n) ans = sum;
	else if (m == 2) {
		for (int i = 1; i <= n; i ++){
			for (int j = 1; j <= n; j ++){
				if (i == j) continue;
				ans = max(ans, a[i] & a[j]);
			}
		}
	} else if (m == n - 1) {
		for (int i = 1; i <= n; i ++){
			ans = max(ans, sum & a[i]);
		}
	} else {
		dfs(1, 0);
	}
	cout << ans;
	return 0;
}