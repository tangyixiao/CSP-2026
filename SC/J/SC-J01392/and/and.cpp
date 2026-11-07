#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M = 1e5 + 2;
const int inf = (1 << 31);
int a[M], ans;
int n, m;
void dfs(int i, int j, int v){
	if(j == m){
		ans = max(ans, v);
		return;
	}
	if(i > n) return;
	if(j < m){
		dfs(i + 1, j + 1, v & a[i]);
	}
	dfs(i + 1, j, v);
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	dfs(1, 0, ~inf);
	cout << ans;
}