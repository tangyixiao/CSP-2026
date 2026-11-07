#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 50;
int n,m,a[N],ans;
bool vis[N];
void dfs(int x,int sum){
	if(x == m){
		ans = max(ans,sum);
		return ;
	}
	for(int i = 1;i <= n; ++ i){
		if(vis[i]) continue;
		vis[i] = true;
		dfs(x + 1,sum & a[i]);
		vis[i] = false;
	}
}
int32_t main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n; ++ i){
		cin >> a[i];
	}
	if(m == n){
		ans = a[1];
		for(int i = 2;i <= m; ++ i){
			ans = (ans & a[i]);
		}
		cout << ans;
		return 0;
	} 
	for(int i = 1;i <= n; ++ i){
		vis[i] = true;
		dfs(1,a[i]);
		vis[i] = false;
	} 
	cout << ans;
	return 0;
}
