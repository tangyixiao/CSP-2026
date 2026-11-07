#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;

ll a[200005];
ll dp[20005][20005];
int main(){
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=max(dp[i][j-1]&a[i],dp[i-1][j-1]&a[i]);
		}
    } 
	cout<<dp[n][m];
	return 0;
}
