#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

int n, m;
int a[N];
int vis[N];
int ans = 0;

void dfs(int x, int sum){
	if(x == m){
		ans = max(ans, sum);
		return ;
	}
	
	for(int i = 1; i <= n; i++){
		if(vis[i]) continue;
		vis[i] = 1;
		dfs(x+1, sum & a[i]);
		vis[i] = 0;
	}
}

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	dfs(0, (1 << 31) - 1);
	
	cout << ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7

*/
