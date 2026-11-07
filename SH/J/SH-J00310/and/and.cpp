#include<bits/stdc++.h>
using namespace std;

int n,m,ans=4294967295,now,a[200000],mx;

int dp[200000][2000];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if(n==m){
		for(int i=0;i<n;i++){
			cin>>now;
			ans=ans&now;
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i][1]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			mx=0;
			for(int k=1;k<=n;k++){
				if(k!=i){
					mx=max(dp[k][j-1]&a[i],mx);
				}
			}
			dp[i][j]=max(0,max(dp[i-1][j],mx));
		}	
	}
	cout<<dp[n][m];
	return 0;
} 
