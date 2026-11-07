#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
long long a[N],dp[N],bu[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		dp[0]=dp[0]&a[i];
	}
	for(int i=0;i<=m;i++)dp[i]=-1; 
	if(m==n){
		for(int i=1;i<=n;i++){
			dp[m]=dp[m]&a[i];
		}
		cout<<dp[m];
		return 0;
	}
	if(m==n-1){
		int ans=-2,cnt=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i)cnt=cnt&a[j];
			} 
			ans=max(ans,cnt);
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=1;j++){
				dp[j]=max(dp[j],dp[j-1]&a[i]);
			}
		}
		cout<<dp[m];
		return 0;		
	}
	return 0;
} 