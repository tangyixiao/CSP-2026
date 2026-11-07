#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a[500005];
pair<bool,ll> vis[500005];
ll sum[300005];
void paly(ll x){
	memset(vis,0,sizeof(vis));
	for(int i=x;i<=n;i++){
		if(vis[a[i]].first==1){
			for(ll j=vis[a[i]].second;j<i;j++){
				vis[a[j]].first=0;
				vis[a[j]].second=0;
			}
			vis[a[i]].first=1;
			vis[a[i]].second=i;
		}
		else{
			vis[a[i]].first=1;
			vis[a[i]].second=i;
		}
	}
	for(int i=1;i<=m;i++){
		if(vis[i].first==1){
			sum[i]++;
		}
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		paly(i);
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}