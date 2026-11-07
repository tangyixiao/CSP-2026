#include<bits/stdc++.h>
#define int long long
using namespace std;
int vis[600000];
int fg[600000];
int num[600000];
int dp[600000];
int ans[600000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		vis[i]=100000000;
	}
	for(int i=1;i<=n;i++){
		cin>>num[i];
		vis[num[i]]=i;
		dp[i]=1;
	}
	for(int i=1;i<=n;i++){
		if(vis[num[i]]!=i){
			dp[vis[num[i]]]+=dp[i];
		}
		else{
			dp[i+1]+=dp[i];
			ans[num[i]]=dp[i];
		}
	}
	//for(int i=1;i<=n;i++){
	//	cout<<dp[i]<<endl;
	//}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
