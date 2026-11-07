#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define il inline
using namespace std;

const ll N = 2e5+5, M = 2e5+5;

ll n, m, a[N], yu, b[N];
bool bits[N][100], al[N], reng[N];
bool vis[N];
ll xuan[N], maxx;
void dfs(ll s) {
	if (s == m) {
		ll ans = xuan[1];
		for (int i = 1; i <= m; i++) {
			ans &= xuan[i];
		}
		maxx = max(ans, maxx);
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			xuan[s] = a[i];
			vis[i] = 1;
			dfs(s+1);
			vis[i] = 0;
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	if (m == 1) {
		ll mx;
		for (int i = 1; i <= n; i++) mx = max(mx, a[i]);
		cout << mx;
		return 0;
	}
	if (m == n) {
		ll mx;
		for (int i = 1; i <= n; i++) mx &=a[i];
		cout << mx;
		return 0;
	}
	dfs(1);
	cout << maxx;
	return 0;

//	else {
//
//	for (int i = 1; i <= n; i++) b[i]= a[i];
//	for (int i = 1; i <= n; i++) {
//		ll j = 0;
//		while (a[i]) {
//			bits[i][j++] = a[i] & 1;
//			a[i] >>= 1;
//		}
//	}
//	int i = 40;
//	for (; i >= 0; i--) {
//		memset(reng,0,sizeof(reng));
//		yu = 0;
//		for (int j = 1; j <= n; j++) {
//			if(bits[j][i] && al[j]==0) yu++;
//		}
//		if (yu >= m) {
//			for (int j = 1; j <= n; j++) {
//				if (!bits[j][i]) {
//					reng[j] = 1;
//				}
//			}
//			if (i != 0) {
//				yu = 0;
//				for (int j = 1; j <= n; j++) {
//					if(bits[j][i-1]&&reng[j]==0) yu++;
//				}
//				for (int l = 1; l <= n; l++) {
//					if (reng[l]) al[l] = 1;
//				}
//			}
//
//
//		}
//	}
//	ll ans;
//	for (int i = 1; i <= n; i++) {
//		if (al[i]) ans = b[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		if (al[i]) ans &= b[i];
//	}
//	cout << ans;
//	}
    return 0;
}