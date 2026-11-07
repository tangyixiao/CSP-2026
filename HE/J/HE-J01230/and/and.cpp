#include<bits/stdc++.h>
using namespace std;
#define int long long
//不一定连续 
const int N = 2e5+5;
int n,m;
int a[N],vis[N];
int dp[2010][2010];
int ans = 0;
void dfs(int k,int num){
//	cout<<k<<' '<<num<<'\n';
	if(k==m){
//		cout<<k<<' '<<num<<'\n';
		ans = max(ans,num);
		return ;
	}
	for(int i = 1;i<=n;i++){
		if(vis[i]) continue;
		vis[i] = 1;
		dfs(k+1,(k==0?a[i]:num&a[i]));
		vis[i] = 0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int mx = 0;
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int i = 1;i<=n;i++){
		mx = max(a[i],mx);
	}
	if(m==1){
		cout<<mx<<'\n';
		return 0; 
	}
	if(m==n){
		int kkk = a[1];
		for(int i = 2;i<=n;i++) kkk&=a[i];
		cout<<kkk<<'\n';
		return 0;
	}
	if(pow(n,m)<=100000000){
		dfs(0,0);
		cout<<ans<<'\n';		
	}
	else if(n<=2000){
		for(int i = 1;i<=n;i++){
			dp[i][1]= max(mx,a[i]);
			mx = max(a[i],mx);
	//		dp[i][1] = mx;
		}
		for(int i = 2;i<=n;i++){
			for(int k = 2;k<=min(i,m);k++){
				dp[i][k] = dp[i-1][k];
				for(int j = 1;j<i;j++){
					dp[i][k] = max(dp[i][k],dp[j][k-1]&a[i]);
				}
			}
		}
		cout<<dp[n][m]<<'\n';
	}
	else{
		cout<<0<<'\n';
	}
	return 0;
}
