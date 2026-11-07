#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k,t,ans;
const int N = 200005;
bool vis[N];
ll a[N];

ll dfs(ll x,ll s){
	if(s == m){
		ans = max(ans,x);
	}
	for(int i= 1;i<=n;i++){
		if(!vis[i]){
			vis[i] = 1;
			dfs(x&a[i],s+1);
			vis[i] = 0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		vis[i] = 1;
		dfs(a[i],1);
		vis[i] = 1;
	}
	cout<<ans;
} 