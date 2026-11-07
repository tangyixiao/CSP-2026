#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int dp[n+1][m+1];
	memset(dp,0xFF,sizeof(dp));
//	for(int i=1;i<=n;i++){
//		dp[i][1]=a[i];
//	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i>=j){
				dp[i][j]=max(dp[i-1][j],(dp[i-1][j-1]&a[i]));
//				cout<<dp[i][j]<<" ";
			}
		}
	}
//	cout<<endl;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<dp[n][m];
	return 0;
} 