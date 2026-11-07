#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;

int n,m;
int a[N];
int dp[N][N];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(dp,0,sizeof(dp));
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			int num;
			if(j==1)num=a[i];
			else num=dp[i-1][j-1]&a[i];
			//cout<<dp[i][j]<<' '<<dp[i-1][j]<<' '<<num<<endl;
			dp[i][j]=max(dp[i][j],max(dp[i-1][j],num));
			//cout<<dp[i][j]<<endl;
		}
	}
	cout<<dp[n][m];
}



/*
5 3
31 3 1 15 15
*/







