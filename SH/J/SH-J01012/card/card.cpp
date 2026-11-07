#include<bits/stdc++.h>
using namespace std;
int n,m,a[5010],dp[5010][3010],cnt[3010],vis[3010],ans[3010],last[3010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]==a[i-1]){
			n--;
			i--;
		}cnt[a[i]]++;
		last[a[i]]=i;
	}for (int i=n;i>0;i--){
		if (vis[a[i]]==0){
			vis[a[i]]=1;
			for (int j=1;j<=m;j++){
				dp[i][j]=dp[i+1][j];
			}dp[i][a[i]]++;
			for (int j=1;j<=m;j++){
				ans[j]+=cnt[a[i]]*dp[i][j];
			}
		}else{
			for (int j=1;j<=m;j++){
				dp[i][j]=dp[last[a[i]]][j];
			}
		}
	}for (int j=1;j<=m-1;j++){
		cout<<ans[j]<<" ";
	}cout<<ans[m]<<"\n";
	return 0;
}
