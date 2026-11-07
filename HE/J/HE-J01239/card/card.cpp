#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 10;
int n, m, a[N], p[N], id[N], ans[N];
bool vis[N];
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) cin >> a[i];
	for (int i = 1; i <= n; i ++) {
		p[i] = id[a[i]];
		id[a[i]] = i;
	}
	for (int i = 1; i <= n; i ++) {
		for (int j = i; j <= n; j ++) vis[j] = 1;
		
		for (int j = i; j <= n; j ++) {
			if (p[j] >= i && vis[p[j]]) {
				for (int k = p[j]; k < j; k ++) 
					vis[k] = 0;
			}
		}
		
		for (int j = i; j <= n; j ++)
			if(vis[j]) ans[a[j]] ++;
	}
	
	for (int i = 1; i <= m; i ++)
		cout << ans[i] << ' ';
	return 0;
}
