#include<bits/stdc++.h>
using namespace std;

int n,m,dp[205][205],a[200005];
char c[200005];
int pyx[30];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int mul=1;
	for(int i=1;i<=30;i++){
		mul*=2;
	}
	dp[0][0]=mul-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i&&j<=m;j++){
			//选
			int maxn=-2e9;
			for(int k=j-1;k<=i-1;k++){
				maxn=max(maxn,dp[k][j-1]);
			}
			dp[i][j]=max(dp[i][j],maxn&a[i]);
			//不选
			for(int k=j;k<=i-1;k++){
				dp[i][j]=max(dp[i][j],dp[k][j]);
			}
		}
	}
	printf("%d\n",dp[n][m]);
	return 0;
}
/*
3
2 a
2 b
1 c
*/