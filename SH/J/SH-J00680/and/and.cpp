#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;++i){
		cin>>a[i];
		dp[i]=a[i];
	}
	for(long long i=1;i<=n;++i){
		for(long long j=1;j<=m;++j){
			dp[j]=max(dp[j],dp[j]&dp[j-i]);
		}
	}
	cout<<dp[n];
}

