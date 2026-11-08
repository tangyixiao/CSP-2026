#include<bits/stdc++.h>
using namespace std;
int n,m,sz[200050],dp[9050][9050];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>sz[i];
	sort(sz+1,sz+n+1);
	for(int i=1;i<=n;i++) dp[1][i]=sz[i];
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j-1<=0) dp[i][j]=sz[1];
			else dp[i][j]=max(dp[i][j-1],dp[i-1][j-1]&dp[i-1][j]);
		}
	}
	cout<<dp[m][n];
	return 0;
} 
