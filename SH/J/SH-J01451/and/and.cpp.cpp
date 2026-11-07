#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[200000],dp[200000][200000];
ll second(ll a){
	ll ans=0;
	for(ll i=0;pow(2,i)<=a;i++){
		if(a%2==1)ans+=pow(2,i-1);
		a/=2;
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=0;i<n;i++){
		ll b;
		cin>>b;
		a[i]=second(b);
		dp[i][0]=b;
	}
	for(ll i=1;i<n;i++){
		for(ll j=1;j<m;j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
		}
	}
	ll maxn=0;
	for(ll i=1;i<n;i++){
		maxn=max(maxn,dp[i][m-1]);
	}
	cout<<maxn; 
	return 0;
}
