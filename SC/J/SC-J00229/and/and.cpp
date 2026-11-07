#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	if(1==2){
		ll rp=0;
		while(1){
			rp++;
		}
	}
	ll n,m;
	cin>>n>>m;
	vl a(n+1);
	FOR(i,1,n){
		cin>>a[i];
	}
	ll dp[n+1][m+1]={0};//选到第i个数,已经选了m个数;在此种情形下能与得的最大值
	FOR(i,1,n){
		dp[i][1]=a[i];
	}
	FOR(i,1,n){
		FOR(j,1,m){
			dp[i][j]=max((dp[i][j-1]&a[i-1]),dp[i][j]);
		}
	}
//	FOR(i,1,n){
//		FOR(j,1,m){
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
	cout<<dp[n][m];
}
//我草我咋写出来的