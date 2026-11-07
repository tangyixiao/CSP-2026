#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5,inf=INT_MAX;
ll arr[N];
ll n,m,ans;
bool is;

void dfs(ll idx,ll val,ll get){
	if(idx>n && get>=m){
		if(val!=inf) ans=max(ans,val);
		return ;
	}
	if(idx>n) return ;
	if(get>=m) dfs(idx+1,val,get);
	else{
		dfs(idx+1,val,get);
		dfs(idx+1,val&arr[idx],get+1);
	}
}

void solveI(){
	dfs(1,inf,0);
	cout<<ans;
}

void solveII(){
	ans=arr[1];
	for(int i=2;i<=n;i++) ans&=arr[i];
	cout<<ans;
}

void solveIII(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			ans=max(ans,arr[i]&arr[j]);
		}
	}
	cout<<ans;
}

void solveIV(){
	for(int i=1;i<=n;i++){
		ans=max(ans,arr[i]);
	}
	cout<<ans;
}

void solveV(){
	ll dp[2005][2005];
	ll maxn=-inf;
	memset(dp,0,sizeof dp);
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++){
		maxn=max(maxn,arr[i]);
		dp[i][1]=maxn;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=m;j++)
			dp[i][j]=-inf;
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			dp[i][j]=max(dp[i-1][j-1]&arr[i],dp[i-1][j]);
		}
	}
	cout<<dp[n][m];
}

void solveVI(){
	cout<<n-m;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]<arr[i-1]) is=true;
	}
	if(m==n) solveII();
	else if(m==2) solveIII();
	else if(m==1) solveIV();
	else if(n<=20) solveI();
	else if(!is) solveVI();
	else solveV();
	return 0;
}