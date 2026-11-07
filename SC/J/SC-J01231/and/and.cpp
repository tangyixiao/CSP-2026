#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int dp[MAXN];
int n,m;
int a[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	int Max=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(Max<a[i]) Max=a[i];
	}
	fill(dp+1,dp+1+n,Max);
	for(int i=1;i<=m;i++){
		for(int i=n;i>=m+1;i--){
			dp[i]=min(dp[i],dp[i-1]&a[i]);
		}
	}
	cout<<dp[n];
	fclose(stdin);
	fclose(stdout);
	return 0;
}