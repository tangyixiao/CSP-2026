#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
const int N = 2e5+10;
ll a[N];
int mark[N];
int pos[N];
ll ret = 0;
void dfs(int x) {
	if(x == m+1) {
		ll jett = pos[1];
		for(int i = 2; i <= m; i ++) {
			jett &= pos[i];
		}
		ret = max(ret, jett);
		return;
	}
	for(int i = 1; i <= n; i ++) {
		if(!mark[i]) {
			mark[i] = 1;
			pos[x] = a[i];
			dfs(x+1);
			mark[i] = 0;
		}
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	if(m == 1) {
		ll maxx = -1;
		for(int i = 1; i <= n; i ++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
		return 0;
	}
	if(m == n) {
		ll ans = a[1];
		for(int i = 2; i <= n; i ++) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 2) {
		ll res = 0;
		for(int i = 1; i <= n; i ++) {
			for(int j = 1; j <= n; j ++) {
				if(i == j) {
					continue;
				}
				res = max(a[i]&a[j], res);
			}
		}
		cout << res;
		return 0;
	}
	dfs(1);
	cout << ret;
	return 0;
}