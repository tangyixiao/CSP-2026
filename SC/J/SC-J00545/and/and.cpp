#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int dp[105][105]={};
	int a[100005]={};
	int nowmax=INT_MIN;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nowmax=max(nowmax,a[i]);
		dp[i][1]=nowmax;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=i;j++){
			//1:choose
			dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i-1][j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}