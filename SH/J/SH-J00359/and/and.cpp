#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],dp[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=0;i<=m;i++){
		dp[i]=1073741823;
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i]);
			if(dp[j]==1073741823) dp[j]=dp[j-1]&a[i];
		}
	}
	cout<<dp[m];
	return 0;
} 
