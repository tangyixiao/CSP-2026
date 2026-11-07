#include<bits/stdc++.h>
using namespace std;
const int N =  1e6 + 5;
int a[N],vis[N];
long long dp[N];
int n,m;
long long ans = -1;
int first;


void dfs(int k){
	if(k == m){
		ans = max(ans,dp[n - 1]);
		//for(int i = k - 1;i < n;i++) dp[i] = 0;
		return;
	}
	for(int i = 1;i < n;i++){
		dp[0] = first;
		if(vis[i] == 1)continue;
		vis[i] = 1;
		dp[i] = max(dp[i - 1] & a[i],dp[i - 1]);
		dfs(k + 1);
		vis[i] = 0;
		//dp[i] = 0;
		dp[i] = a[i];
		
	}
}

int main(){
	
	freopen("and.in"."r",stdin);
	freopen("and.out","r",stdout);
	
	cin >> n >> m;
	for(int i = 0;i < n;i++) cin >> a[i];
	first = a[0];
	dfs(1);
	cout << ans;
	
	
	return 0;
}
