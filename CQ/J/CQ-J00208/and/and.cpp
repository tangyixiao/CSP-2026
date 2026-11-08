#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[100001];
int dp[2005][2005];
int mk[100001];
int mj[100001];
int work(int x,int y){
	int len1=0,len2=0;
	int xt=x,yt=y;
	while(xt!=0){
		mk[++len1]=xt%2;
//		cout<<xt%2<<endl;
		xt/=2;
	}
	while(yt!=0){
		
		mj[++len2]=yt%2;
		yt/=2;
	}
	int kk=1;
	int ans=0;
	int j=1;
	for(int i=1;i<=len1;i++){
		if(len2==j-1)return ans;
		ans+=kk*(mj[i]&&mk[j]);
		kk*=2;
		j++;
	}
	return ans;
}
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		dp[i][1]=arr[i];
	}
	for(int i=2;i<=n;i++){
		for(int j=m;j>=2;j--){
			for(int k=1;k<i;k++){
				dp[i][j]=max(dp[i][j],max(work(dp[k][j-1],arr[i]),dp[k][j]));
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
//		cout<<dp[i][m]<<" ";
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
	return 0;
}
