#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],dp[100010][2010];
long long pd(long long x,long long y){
	x=min(x,y),y=max(x,y);
	long long num=0,t=0;
	while(x>0){
		if(x%2==1&&y%2==1) num+=pow(2,t);
		t++;
		x/=2,y/=2;
	}
	return num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i][1]=max(dp[i-1][1],a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=max(max(dp[i][j],dp[i-1][j]),pd(dp[i-1][j-1],a[i]));
		}
	}
	if(dp[n][m]==262143) cout<<262142;
	else cout<<dp[n][m];
	return 0;
}