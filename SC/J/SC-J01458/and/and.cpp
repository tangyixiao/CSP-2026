#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,a[200005],vis[200005];
int maxx = 0,ans=2e30+1;
void dfs(int x){
	if(x == m){
		maxx = max(maxx,ans);
		return ;
	}
	if(x == n){
		return ;
	}
	for(int i = 1;i <= n;i++){
		int nn = ans;
		if(vis[i]==0){
			ans&=a[i];
			vis[i]=1;
			dfs(x+1);
			ans = nn;
			vis[i]=0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n>>m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	dfs(0);
	cout << maxx;
	return 0;
}