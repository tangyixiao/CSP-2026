#include<bits/stdc++.h>
using namespace std;
long long dp[200005],n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=m;j>=1;j--){
			long long u=dp[j-1]&a[i];
			if(j==1)u=a[i];
			dp[j]=max(dp[j],u);
		}
	}cout<<dp[m];
	return 0;
} 