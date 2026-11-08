#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int ans;
int dp[200010],cnt[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	cnt[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(dp[j]&a[i]>dp[i]){
				dp[i]=dp[j]&a[i];
				cnt[i]=cnt[j]+1;
				if(cnt[i]==m){
					ans=max(ans,cnt[i]);
				}
			}
		}
	}
	cout<<ans;
}
