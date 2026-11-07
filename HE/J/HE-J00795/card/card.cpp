#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int n, m, a[N], b[N], ans[N], vis[N], c[N], d[N];
int main(){
	freopen("card.in", "R", stdin);
	freopen("card.out", "W", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {cin >> a[i]; c[a[i]]++; d[a[i]] = i;}
	if(m == 1) {cout << n; return 0;}
	if(n <= 5000 && m <= 3000){
		for(int i = 1; i <= n; ++i){
		memset(vis, 0, sizeof vis);
		for(int j = i; j <= n; ++j){
			if(vis[a[j]]){
				for(int k = b[a[j]]; k < j; ++k){
					vis[a[k]] = 0;
				}
			}
			vis[a[j]] = 1;
			b[a[j]] = j;
		}
		for(int l = 1; l <= m; ++l) {if(vis[l]) ans[l]++;}
	}
	}
	else{
		for(int i = 1; i <= m; ++i)ans[i] = d[i];
	}
	for(int i = 1; i <= m; ++i) cout << ans[i] << " ";
	return 0;
}
