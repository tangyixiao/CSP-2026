#include<bits/stdc++.h>
using namespace std;
const int MAXM=2*10*10*10*10*10+10;
long long n,m,a[MAXM],dp[MAXM];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(long long i=1;i<=n;i++){	
		
		dp[m]=a[i];	
		for(long long j=m;j>=1;j--){
			for(long long k=n;k>=i+1;k--){
				if(i==n){
					dp[m]=max(a[i],dp[m]);
					break;
				}
				dp[j]=max(dp[j],dp[j-1]&a[k]);
			}
		}
	}
	long long ans=LLONG_MIN;
	for(long long j=1;j<=n;j++){		
		ans=max(ans,dp[j]);
	}
	printf("%lld",ans);
	return 0;
}
