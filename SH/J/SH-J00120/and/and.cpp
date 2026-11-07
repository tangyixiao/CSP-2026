#include<bits/stdc++.h>
using namespace std;
int a[200005];
int n,m;
int mx = 0;
bool vis[200005];
void dfs(int dep,int ans,bool vis[200005]){
	if(dep == m){
		mx = max(mx,ans);
		return;
	}
	for(int i = 1; i <= n; i++){
		if(vis[i] == 1){
			continue;
		}else{
			vis[i] = 1;
			dfs(dep+1,ans&a[i],vis);
			vis[i] = 0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int mxx = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		mxx = max(mxx,a[i]);
	}
	if(m == n){
		long long ans = a[1];
		for(int i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 1){
		cout << mxx;
		return 0;
	}
	dfs(0,(1<<31)-1,vis);
	cout << mx;
	return 0;
}

