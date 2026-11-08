#include<bits/stdc++.h>
using namespace std;
int a[200100];
int dp[10010][10010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dp[i][1]=a[i];
	}
	for(int i=1;i<=m;i++){
		dp[1][i]=a[1];
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			dp[i][j]=max(a[i],dp[i-1][j-1]&a[i]);
		}
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<dp[n][m];
	return 0;
}

