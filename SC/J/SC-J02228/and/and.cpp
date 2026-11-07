#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 3, N1 = (1 << 30) + 5;
int n, m, mx = -1e17;
int a[N];
vector<int> path;
bool vis[N1];
void dfs(int cnt) {
	if(cnt == 0) {
		int ans, t = 0;
		for(auto i : path) {
			if(t == 0) ans = i;
			else ans &= i;
			t++;
		}
		mx = max(ans, mx);
	}
	for(int i = 1; i <= n; ++i){
		if(vis[a[i]]) continue;
		path.push_back(a[i]);
		vis[a[i]] = 1;
		dfs(cnt - 1);
		path.pop_back();
		vis[a[i]] = 0;
	}
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	dfs(m);
	cout << mx;
	return 0;
}
