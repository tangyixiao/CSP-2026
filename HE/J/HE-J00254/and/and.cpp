#include<bits/stdc++.h>
using namespace std;
#define ll long long
const size_t mn = (size_t)(2e5+100);
int n,m;
ll a[mn],dp[mn],ans=0;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dp[0]=LLONG_MAX;
	for(int i=0;i<n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i]);
//			cout<<j<<" "<<dp[j]<<endl;
		}
	}
	cout<<dp[m];
	return 0;
}
