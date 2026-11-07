#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a[200005];
ll dp[2][200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1][1]=a[1];
	ll ans=0;
	for(ll i=1;i<=n;i++){
		ll cnt=a[i];
		dp[i%2][1]=max(dp[(i-2)%2][1],a[i]);
		for(ll j=2;j<=m;j++){
			if(j<=min(i,m)){
				dp[i%2][j]=max(dp[(i-1)%2][j],(dp[(i-1)%2][j-1]&a[i]));
			}
			cnt&=a[j+i-1];
		}
		ans=max(ans,cnt);
	}
	cout<<max(dp[n%2][m],ans);
	return 0;
}