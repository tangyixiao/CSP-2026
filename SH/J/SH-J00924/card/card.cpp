#include<bits/stdc++.h>
using namespace std;
int n,m;
int dp[500005];
int a[500005],f[300005],ans[300005];
bool b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=n;i>0;i--){
		cin>>a[i];
	}
	dp[1]=0;
	f[a[1]]=1;
	for(int i=2;i<=n;i++){
		if(f[a[i]]==0){
			dp[i]=i-1;
			f[a[i]]=i;
		}
		else{
			dp[i]=dp[f[a[i]]];
			f[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(b[i])continue;
		int dis=0,x=i;
		while(x!=0){
			dis++;
			if(b[x])ans[a[x]]++;
			else ans[a[x]]+=dis;
			b[x]=true;
			x=dp[x];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
