//>50==65
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],t[128];
int dp[10004][10004],ans,f[10004][10004];
int speca=1,specb=1;
int dfs(int i,int j){
	if(j>m)return 0;
	if(i>n)
		if(j==m)return t[32]-1;
		else return 0;
	if(f[i][j])return f[i][j];
	return f[i][j]=max(dfs(i+1,j),dfs(i+1,j+1)&a[i]);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;if(n&(n-1))specb=0;for(int i=1;i<=n;i++){cin>>a[i];if(((a[i]+1)&(a[i])))speca=0;if(a[i]!=i-1)specb=0;}
	t[0]=1;
	for(int i=1;i<=32;i++)t[i]=t[i-1]*2;
	//1.dp
	if(n*m<=4*1e8){
//		for(int i=1;i<=n;i++)dp[i][0]=t[32]-1;
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=m;j++){
//				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
//			}
//		}
//		for(int i=1;i<=n;i++)ans=max(ans,dp[i][m]);
//		cout<<ans;
		cout<<dfs(1,0);
	}
	if(speca){
//		cout<<"speca";
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	else if(specb){
//		cout<<"specb";
		ans=t[32]-1;
		for(int i=n;i>=n-m+1;i--)ans=ans&a[i];
		cout<<ans;
	}
	else if(m==n-1){
		cout<<"m==n-1 ";
		for(int i=1;i<=n;i++){
			int cnt=t[32]-1;
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				cnt=cnt&a[j];
			}
			ans=max(ans,cnt);
		}
		cout<<ans;
	}
}
