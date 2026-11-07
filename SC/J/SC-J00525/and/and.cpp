#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll ans;
const int N = 2e5+1;
bool vis[N];
int a[N];
void dfs(int x,ll k){
	if(x == m){
		ans = max(ans,k);
		return;
	}
	for(int i = 1; i <= n; i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(x+1,k&a[i]);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)cin >> a[i];
	for(int i = 1; i <= n; i++){
		vis[i] = 1;
		dfs(1,a[i]);
		vis[i] = 0;
	}
	cout << ans;
	return 0;
}