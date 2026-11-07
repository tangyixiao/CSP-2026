#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
int n, m, a[N], vis[N], And[N];
long long ans;
void dfs(int x) {
	if(x == m + 1) {
		long long cnt = a[And[1]];
		for(int i = 2; i <= m; i++) {
			cnt &= a[And[i]];
		}
		ans = max(cnt, ans);
		return;
	}
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			And[x] = i;
			vis[i] = 1;
			dfs(x + 1);
			vis[i] = 0;
		}
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if(n > 2000) {
		ans = a[n];
		for(int i = n - 1; m > 1; i--) {
			ans &= a[i];
			m--;
			//cout << ans << endl;
		}
		cout << ans;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	dfs(1);
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
