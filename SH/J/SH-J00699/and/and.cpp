#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[200010],ans=1,cnt=1;
bool vis[200010];
void dfs(ll step){
	if(step==m){
		ans=max(ans,cnt);
	}
	for(ll i=1;i<=n;i++){
		if(vis[i]) continue;
		ll t=cnt;
		cnt&=a[i];
		vis[i]=1;
		dfs(step+1);
		vis[i]=0;
		cnt=t;
	}
	return;
}
int ch(ll x){
	for(ll i=0;i<=30;i++){
		if(pow(2,i)==x) return 1;
		else if(pow(2,i)==x+1) return 2;
	}
	return 0;
}
bool sort1(ll a,ll b){
	return a>b;
}
ll aa,bb;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	aa=a[1];
	for(ll i=1;i<=n;i++){
		aa&=a[i];
		bb=max(bb,a[i]);		
	}
	if(m==1){
		cout<<bb<<endl;
		return 0;
	}
	else if(m==n){
		cout<<aa<<endl;
		return 0; 
	}
	else if(m==n-1){
		ll ans1=a[2];
		for(ll i=2;i<=n;i++){
			ans1&=a[i];
		}
		for(ll i=2;i<=n;i++){
			ans=a[i-1];
			for(ll j=1;j<=n;j++){
				if(i==j) continue;
				ans&=a[j];
			}
			ans1=max(ans1,ans);
		}
		cout<<ans1<<endl;
	}
	int k=ch(n);
	if(k==2){
		sort(a+1,a+n+1,sort1);
		ans=a[1];
		for(ll i=2;i<=m;i++){
			ans&=a[i];
		}
		cout<<ans<<endl;
	} 
	else if(k==1){
		sort(a+1,a+n+1,sort1);
		ans=a[1];
		for(ll i=1;i<=m;i++){
			ans&=a[i];
		}
		cout<<ans<<endl;
	}
	else{
		dfs(0);
		cout<<ans<<endl;
	}
	return 0;
} 
