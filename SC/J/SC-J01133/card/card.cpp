#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],f[N],ans[M],d[N],num[N];
struct node{
	int nex;
	bool f;
}dp[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[a[n]]=n;
	dp[n].f=true;
	for(int i=n-1;i>=1;i--){
		if(f[a[i]]==0){
			dp[i].f=true;
			dp[i].nex=i+1;
		}else{
			dp[i].nex=f[a[i]];
		}
		f[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		num[i]++;
		if(dp[i].nex!=0) num[dp[i].nex]+=num[i];
		if(dp[i].f) ans[a[i]]+=num[i];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}