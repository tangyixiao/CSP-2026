#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<vector<int> > dp(m+1,vector<int>(n,0));
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dp[0]=a;
	dp[1][0]=a[0];
	for(int i=1;i<n;i++){
		for(int j=1;j<=i&&j<=m;j++){
			if(i==j-1){
				dp[j][i]=dp[j-1][i-1]&a[i];
			}else{
				dp[j][i]=max(dp[j-1][i-1]&a[i],dp[j][i-1]);
			}
		}
	}
	cout<<dp[m][n-1];
}