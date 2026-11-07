#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=200005;
ll n,m,k,a[MAXN][31],dp[MAXN];
void solve(ll t,ll x){
	ll j=0;
	while(t>0){
		a[x][++j]=t%2;
		t=t/2;
	}
	for(int s=j+1;s<=30;s++) a[x][s]=0;
}
ll pi(int i,int j){
	ll num=1;
	for(int s=1;s<=j;s++) num*=i;
	return num;
}
ll deal(int i,int j){
	ll num=0;
	for(int t=1;t<=30;t++)
		if(a[i][t]==1&&a[j][t]==1) num+=pi(2,t-1);
	return num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&k);
		solve(k,i);
	}
	dp[1]=deal(1,1);dp[0]=pi(2,30)-1;
	for(int i=2;i<=n;i++){
		for(int j=m;j>=1;j--){
			solve(dp[j-1],n+1);
			dp[j]=max(dp[j],deal(i,n+1));
		}
	}
	printf("%lld",dp[m]);
	return 0;
} 