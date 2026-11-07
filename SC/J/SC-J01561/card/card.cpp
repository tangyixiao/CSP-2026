#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=5e5+10;
ll n,m,a[N],fa[N],b[N],ans[N],dp[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) fa[i]=i+1,dp[i]=1;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(b[a[i]]) fa[b[a[i]]]=i;
		b[a[i]]=i;
	}
	for(ll i=1;i<=n;i++) dp[fa[i]]+=dp[i];
	for(ll i=1;i<=n;i++){
		ans[a[i]]=max(ans[a[i]],dp[i]);
	}
	for(ll i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}