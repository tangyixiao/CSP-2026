#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],dp[10005][10005]; 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		maxn=max(maxn,a[i]);
		dp[i][1]=maxn;
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i][j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}


