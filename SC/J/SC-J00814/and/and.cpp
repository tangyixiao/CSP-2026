#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int ans=-1000000;
int a[100000];
int dp[10000];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
//	for(int i=1;i<=n;i++){
//		for(int j=i;j*j<=n;j++){
//			ans=a[i]&a[j];
//			dp[i]=max(dp[i]&a[j],ans);
//		}
//	}
//	cout<<dp[n];
	for(int i=1;i<=n;i++){
		if(m==1){
			ans=max(a[i],a[i+1]);
		}else if(m==n){
			ans=a[i]&ans;
		}else if(m==2){
				ans=max(a[i]&a[i+1],ans);
		}
	}
	cout<<ans<<'\n';
	return 0;
}
