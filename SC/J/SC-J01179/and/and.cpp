#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;
#define ll long long
ll n,m,ans = -1e18;
ll a[N];
bool vis[N];

void dfs(ll x,ll y,ll p){
	if(x==m){
		ans = max(ans,y);
		return;
	}
	vis[p] = 1;
	for(int i=p;i<=n;i++){
		if(!vis[i]){
			dfs(x+1,y&a[i],i);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans = max(ans,a[i]);
			
		}
	}else if(m==n){
		ans = a[1];
		for(int i=2;i<=n;i++){
			ans = ans&a[i];
		}
	}else{
		for(int i=1;i<=n;i++){
			dfs(1,a[i],i);
		}
	}
	cout<<ans;
	return 0;
}