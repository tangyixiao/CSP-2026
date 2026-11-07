#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[10000000];
int dp[10000][10000];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			maxn=max(a[i],maxn);
		}
		cout<<maxn<<endl;
	}else if(m==n){
		cin>>a[1];
		int sum=a[1];
		for(int i=2;i<=n;i++){
			cin>>a[i];
			sum&=a[i];
		}
		cout<<sum<<endl;
	}else{
		int maxn=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			maxn=max(maxn,a[i]);
			dp[i][1]=maxn;
		}
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				dp[i][j]=dp[i-1][j-1]&a[i];
			}
		}
		cout<<dp[n][m];
	}
	return 0;
}