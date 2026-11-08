#include<bits/stdc++.h>
using namespace std;
const int N=5005,M=2e5+5;
int n,m;
int dp[N][N],a[M];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	if(n<=5000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(j==1) dp[i][j]=max(dp[i-1][j],a[i]);
				else{
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);	
				}
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++) ans=max(ans,dp[i][m]);
		printf("%d",ans);
	}
	else cout<<a[m];
	return 0;
}
