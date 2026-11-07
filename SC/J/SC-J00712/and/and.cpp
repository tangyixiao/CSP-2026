#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
struct node{
	int x;
	int cnt;
}dp[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i].cnt=1,dp[i].x=a[i];
	}
	for(int i=2;i<=n;i++){
		int y=dp[i-1].x&a[i];
		if(y>=dp[i].x) dp[i].x=y,dp[i].cnt=dp[i-1].cnt+1;
	}
	int mx=-1;
	for(int i=1;i<=n;i++){
		if(dp[i].cnt==m) mx=max(dp[i].x,mx);
	}
	cout<<mx;
	return 0;
}