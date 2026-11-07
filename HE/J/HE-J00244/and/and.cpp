#include<bits/stdc++.h>
using namespace std;
long long n,m,dp[1000000],a[1000000];
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=m;j>=1;j--){
			if(dp[i]==0){
				dp[i]=a[i];
			}
			long long s=(dp[j-1] & a[i]);
			dp[i]=max(dp[i],s);
		}
	}
	cout<<dp[m];
	return 0;
}
