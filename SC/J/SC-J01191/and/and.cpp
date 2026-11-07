#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll n,m,dp[2000005],a[2000005];
//struct Node{
//	ll k,s;
//}a[200005];
//bool sf(ll x){
//	if(x%2) return 0;
//	while(1){
//		if(x==2) return 1;
//		if(x%2!=0&&x<4) return 0;
//		else x/=2;
//	}
//}
//ll jdz(ll x){
//	int tmp;
//	if(sf(x)) 
//	if(x%2){
//		
//	}
//	
//	while(tmp<=x)
//}
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
//	dp[0]=1;
//	for(ll i=1;i<=n;i++){
//		//cout<<i<<" "<<dp[i]<<","<<dp[i-1]+(dp[i-1]&a[i])<<"\n";
//		for(ll j=1;j<=i;j++){
//			dp[i]=max(dp[i-1],dp[i-1]&a[i]);
//		}
//	}
	int ans=1;
	for(ll i=1;i<=m;i++)  ans=(ans&a[i]);
	cout<<ans;
	fclose(stdin),fclose(stdout);
	return 0;
}