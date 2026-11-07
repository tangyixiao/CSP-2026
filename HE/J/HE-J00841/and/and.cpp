#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=3e5+50;
ll n,m;
ll a[N];
ll aa;
ll ans;
ll a1=0;
ll vis[N];
void dfs(ll tot,ll su){
	if(tot==m){
		ans=max(ans,su);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		if(su==-1) dfs(tot+1,a[i]);
		else dfs(tot+1,su&a[i]);
		vis[i]=0;
	}
	return; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		aa=max(a[i],aa);
		if(i==1){
			a1=a[i];
		}
		else{
			a1&=a[i];
		}
	}
	if(m==1){
		cout<<aa;
		return 0;
	}
	if(m==n){
		cout<<a1;
		return 0;
	}
	if(m==2){
		int aans=-1;
		for(int i=1;i<=n;i++){
			int a2=0;
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				a2=a[i]&a[j];
//				cout<<a2<<"\n";
				aans=max(aans,a2);
			}
		}
		cout<<aans;
		return 0;
	}
	dfs(0,-1);
	cout<<ans;
	return 0;
}
/*
10 2
1 2 3 4 5 6 7 8 9 10
*/
