#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,f;
int a[200050],dp[200050];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	scanf("%lld%lld",&n,&m);
	//cout<<"I love cici";
	for(int i=1;i<=n;i++){
		f++;
		scanf("%lld",&a[f]);
		if(a[f]==0) f--;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	dp[1]=a[1];
	for(int i=2;i<=n;i++){
		for(int j=m;j>=1;j--){
			if(j==1) dp[j]=max(dp[j],a[i]);
			else dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
	return 0;
} 