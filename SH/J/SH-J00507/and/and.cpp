#include <bits/stdc++.h>
using namespace std;
long long m,n,a[200010],dp[200010],ph;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ph=1<<30;
	ph--;
	dp[0]=ph;
	for(long long i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1); 
	for(long long i=1;i<=n;++i){
		int t=n-i;
		for(long long j=min(i,m);j>=1;--j){
			if(t+j<m-1) break;
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
	return 0;
}
