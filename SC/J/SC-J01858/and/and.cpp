#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5;
int n, m, a[N];
bool vis[N];
int ans = -1;
void dfs(int sum, int step) {
	if(step == m) {
		ans = max(ans,sum);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if(vis[i]) continue;
		if((sum & a[i]) == 0) continue;
		vis[i] = 1;
		if(sum == -1) {
			dfs(a[i],step+1);
		}
		else{
			
			dfs(sum & a[i],step+1);
		}
		vis[i] = 0;
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(-1,0);
	if(ans == -1) cout << 0;
	else cout << ans;
	
	return 0;
}