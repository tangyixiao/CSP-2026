#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005];
int dp[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ann=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			if(j==1){
				dp[j]=max(dp[j],a[i]);
			}
			else dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
}
