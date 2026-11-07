#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+7;
ll n,m,a[maxn],vis[maxn],ans=-1;
void dfs(ll x){
	if(x==n+1){
		ll cnt=0,res;
		for(int i=1;i<=n;i++){
			if(vis[i]==1){
				if(cnt==0) res=a[i];
				cnt++;
				res&=a[i];
			}
		}
		if(cnt==m){
			ans=max(ans,res);
		}
		return;
	}
	vis[x]=1;
	dfs(x+1);
	vis[x]=0;
	dfs(x+1);
}
void solve1(){
	dfs(1);
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		solve1();
		return 0;
	}
	if(n<=2000){
		ll res=a[1],maxx=-1,love=-1;
		for(int i=1;i<=n;i++){
			res&=a[i];
			maxx=max(maxx,a[i]);
		}
		if(m==1) cout<<maxx;
		if(m==n) cout<<res;
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					love=max(love,(a[i]&a[j]));
				}
			}
			cout<<love;
		}
	}else if(m==n-1){
		sort(a+1,a+n+1);
		int res=a[2];
		for(int i=3;i<=n;i++){
			res&=a[i];
		}
		cout<<res;
	}
	return 0;
}