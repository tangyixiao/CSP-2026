#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+10;
int n,m;
ll a[N],ans=-1e18-10;
ll dp[N][N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) dp[i][1]=max(dp[i-1][1],a[i]);
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(i<j) break;
		    else dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}
	}
	for(int i=1;i<=n;i++)  ans=max(ans,dp[i][m]);
	cout<<ans;
	return 0;
}