#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
int a[200005];
int vis[200005], maxx = 0;
bool fl = 0;
void dfs(int x, int cnt, int ans) {
	vis[x] = 1;
	if(cnt == m) {
		maxx = max(maxx, ans);
		return ;
	}
	for(int i = 1; i <= n; i++) {
		if(vis[i]) continue;
		dfs(i, cnt+1, ans&a[i]);
	}
}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] != i - 1) fl = 1;
	}
	if(n <= 20) {
		for(int i = 1; i <= n; i++) {
			memset(vis, 0, sizeof vis);
			dfs(i, 1, a[i]);
		}
		cout << maxx << endl;
	} 
	else if(n <= 2000) {
		if(m == 1) {
			for(int i = 1; i <= n; i++) {
				maxx = max(maxx, a[i]);
			}
			cout << maxx << endl;
		} else if(m == 2) {
			for(int i = 1; i <= n; i++) {
				for(int j = 1; j <= n; j++) {
					maxx = max(maxx, a[i]&a[j]);
				}
			}
			cout << maxx << endl;
		} else {
			maxx = a[1];
			for(int i = 1; i <= n; i++) {
				maxx = maxx & a[i];
			}
			cout << maxx << endl;
		}
	} else {
		if(m == n - 1) {
			int ans = a[1]; 
			for(int i = 1; i <= n; i++) {
				ans = ans & a[i];
			}
			for(int i = 1; i <= n; i++) {
				maxx = max(~(~ans & a[i]), maxx);	
			}
			cout << maxx;
		} else {
			maxx = a[n];
			sort(a+1, a+n+1);
			for(int i = n; i >= n - m + 1; i--) {
				maxx = maxx & a[i];
			}
			cout << maxx;
		}
	}
	return 0;
}

