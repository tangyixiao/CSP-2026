#include<bits/stdc++.h>
using namespace std;
int a[200010],n,m;
int y=INT_MIN;
int dp[200][20];
void dfs(int num,int sum,int cnt){
	if(num>n){
		if(sum==m){
			y=max(y,cnt);
		}
	}
	dfs(num+1,sum+1,cnt&&a[num+1]);
	dfs(num+1,sum,cnt);
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int uu=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		uu=max(uu,a[i]);
		dp[i][1]=a[i];
	}
	if(m==1){
		cout<<u;
		return 0;
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			int u=dp[i-1][j-1]&&a[i];
//			dp[i][j]=max(dp[i-1][j],u);
//		}	
//	}
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<y;
}

