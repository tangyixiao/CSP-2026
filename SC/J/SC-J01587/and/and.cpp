#include <bits/stdc++.h>
#define int long long
using namespace std;
int m, n, a[200005], ans;
bool vis[200005];
void dfs(int sum, int cnt, int o){
	if(cnt == m){
		ans = max(ans, sum);
		return ;
	}
	for(int i = o + 1; i <= n; i++){
		if(vis[i]){
			continue;
		}
		vis[i] = 1;
		dfs((sum & a[i]), cnt + 1, i);
		vis[i] = 0;
	}
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		vis[i] = 1;
		dfs(a[i], 1, i);
		vis[i] = 0;
	}
	cout << ans;
	return 0;
}