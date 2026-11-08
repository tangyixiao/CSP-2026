#include<bits/stdc++.h>
using namespace std;
long long dp[500010],a[500010],f[500010],n,m,dt,v[500010],ans[500010],f2[500010],f3[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]=f2[a[i]];
		f2[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		f3[f[a[i]]]=i;
	}
	for(int i=1;i<=n;i++){
		if(f3[i]==0)v[i]==1;
	}
	for(int i=1;i<=n;i++){
		if(f3[i]!=0){
			dt+=i;
			dp[i]=dt;
		}else{
			if(v[i])dt-=f[a[i]];
			dp[i]=dt;
		}
	//	cout<<dt<<endl;
	}
	for(int i=1;i<=n;i++){
		dp[i]=i-dp[i];
		ans[a[i]]+=dp[i];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
