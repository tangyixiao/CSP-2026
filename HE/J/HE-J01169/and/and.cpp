#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,maxx,a[200005];
void dfs(ll x,ll sum,ll j){
	if(j==m||x>n){
		if(j==m) maxx=max(maxx,sum);
		return;
	}
	dfs(x+1,sum&a[x],j+1);
	dfs(x+1,sum,j);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==n-1){
		ll ans=a[1];
		for(int i=2;i<n;i++) ans&=a[i];
		ll cnt=a[2];
		for(int i=3;i<=n;i++) cnt&=a[i];
		cout<<max(ans,cnt);
	}else if(m==n){
		ll ans=a[1];
		for(int i=1;i<=n;i++) ans&=a[i];
		cout<<ans;
	}else if(m==1){
		for(int i=1;i<=n;i++) maxx=max(maxx,a[i]);
		cout<<maxx;
	}else if(m==2){
		maxx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++) maxx=max(maxx,a[i]&a[j]);
		}
		cout<<maxx;
	}else if(n<=20){
		maxx=0;
		dfs(1,a[1],0);
		cout<<maxx;
	}else{
		sort(a+1,a+n+1);
		if(a[n]-a[n-1]!=1&&n>=2) cout<<a[n-1];
	}
	return 0;
}
