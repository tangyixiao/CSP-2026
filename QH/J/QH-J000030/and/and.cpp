#include<bits/stdc++.h>
using namespace std;
const int N=2e4+10; 
int a[N];
int dp[N][N];
int n,m;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],dp[i][1]=a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=max(dp[i][j],dp[i][j-1]&a[i]);
		}
	}
	cout<<dp[n][m];
	return 0;
}
