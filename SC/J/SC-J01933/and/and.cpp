#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll N=2e5+5;
ll n,m,mx,ans=-1e18,a[N];
void dfs(ll k,ll cnt,ll sum){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(k==n){
		return;
	}
	for(ll i=k+1;i<=n;i++){
		if(cnt==0){
			dfs(i,cnt+1,a[i]);
		}else{
			dfs(i,cnt+1,sum&a[i]);
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				ll x=a[i]&a[j];
				ans=max(ans,x);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(ll i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	dfs(0,0,0);
	cout<<ans;
	return 0;
}
