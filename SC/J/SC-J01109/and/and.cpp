#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
struct px{
	int num,cnt=0;
}dp[200005][5];
signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
//		dp[i][0].num=dp[i][1].num=(1ll<<32)-1;
	}
	sort(a+1,a+n+1,greater<int>());
	int ans=0;
	for(int i=1;i<=n-k+1;i++){
		int tmp=a[i];
		for(int j=1;j<k;j++){
			tmp&=a[i+j];
//			cout<<tmp<<' ';
			if(tmp<=ans)break;
		}
		ans=max(tmp,ans);
//		cout<<'\n';
//		if(dp[i-1][1].num>dp[i-1][0].num)dp[i][0]={dp[i-1][1].num,dp[i-1][1].cnt};
//		else dp[i][0]={dp[i-1][0].num,dp[i-1][0].cnt};
//		dp[i][1]={a[i],1};
//		if((dp[i-1][1].num&a[i])>(dp[i-1][0].num&a[i])&&dp[i-1][1].cnt!=k)dp[i][1]={(dp[i-1][1].num&a[i]),(dp[i-1][1].cnt&a[i])+1}
	}
	cout<<ans;
	return 0;
}
/*
1 1 1 1
0 0 0 1
1 1 0 0
1 1 0 0
0 0 1 1
*/