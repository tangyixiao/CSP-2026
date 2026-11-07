#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
ll a[200005];
ll dp[200005];
ll i=1;
ll l=0;

inline void H(ll K,ll i,ll M,ll I){
	ll k=K;
	if(M){
		for(ll j=i;j<=n;j++){
		k=k&a[j];
		H(k,j+1,M-1,I);
		k=K;
	}
	}
	else{
		dp[I]=max(dp[I],k);
	}
	
}
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		
		H(a[i],i+1,m-1,i);
		
		l=max(l,dp[i]);
	}
	cout<<l;
	return 0;
}
