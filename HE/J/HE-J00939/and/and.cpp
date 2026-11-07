#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans;
int a[200010];
int dp[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[i-1],dp[j-1]&a[j]);
		}
	}
	sort(a+1,a+n+1);
	ans=a[n]&a[n-1];
	for(int i=3;i<=m;i++){
		ans&=a[n-i+1];
	}
	cout<<dp[m];
	return 0;
}
