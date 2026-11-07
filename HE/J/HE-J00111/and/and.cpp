#include<bits/stdc++.h>
#define ll long long
using namespace std; 
const int N=2e5+50;
ll n,m,ma=-1;
ll a[N];
bool vis[N];
void dfs(ll ans,ll sum){
	if(sum==m) {
		ma=max(ma,ans);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs((ans&a[i]),sum+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(a[i],1);
	}
	cout<<ma;
	return 0;
}
