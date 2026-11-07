#include<bits/stdc++.h>
using namespace std;
int  a[200005],dp[20005][20005],maxx;
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","W",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	cin>>n>>m;
	cin>>a[1];
	maxx=a[1];
	dp[1][1]=a[1];
	for(int i=2;i<=n;i++){
	   cin>>a[i];	
	   maxx=max(maxx,a[i]);
	   dp[i][1]=maxx;
	}	
	if(m==1){
		cout<<maxx;
		return 0;
	}
	for(int i=2;i<=n;i++){
	    for(int j=2;j<=m,j<=i;j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}
	}
	if(dp[n][m]==0){
		cout<<maxx;
		return 0;
	}
	cout<<dp[n][m];
	return 0;
}
