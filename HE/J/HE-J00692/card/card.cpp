#include <bits/stdc++.h>
using namespace std;
int n,m,dp[300005],a[500005];
int vis[300005];
void dfs(int k){
	int x=k;
	if(vis[a[x]]){
		for(int i = k+1;i <= n;i++){
			vis[a[i]]--;
			if(a[i]=a[k]){
				x=i;
				break;
			}
			dp[a[i]]--;
		}
	}
	vis[a[k]]++;
	return;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		dp[a[i]]=i;
	}
	for(int i = n;i >= 1;i--){
		dfs(i);
	}
	for(int i = 1;i <= m;i++)cout << dp[i] << " ";
	return 0;
}

