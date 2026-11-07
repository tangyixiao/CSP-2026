#include<bits/stdc++.h>
using namespace std;
long long n,m,a[10000005],ans,zs=0;
void dfs(int u,long long z,int cnt){
	if(u>n){
		if(cnt==m){
			ans=max(ans,z);
		}
		return;
	}
	dfs(u+1,z,cnt);
	if (z==-1){
		dfs(u+1,a[u],cnt+1);
	}
	else{
		dfs(u+1,z&a[u],cnt+1);
	}
	
	
}
void DFS(int u,long long z,int cnt){
	if(u>n){
		if(cnt==m){
			ans=max(ans,z);
		}
		if((double)clock()/CLOCKS_PER_SEC>0.85){
			cout<<ans<<'\n';
			exit(0);
		}
		return;
	}
	dfs(u+1,z,cnt);
	if (z==-1){
		dfs(u+1,a[u],cnt+1);
	}
	else{
		dfs(u+1,z&a[u],cnt+1);
	}
	
	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1,-1,0);
		cout<<ans<<'\n';
	}
	else if(n<=2000&&m==1){
		long long maxm1=0;
		for(int i=1;i<=n;i++){
			maxm1=max(maxm1,a[i]);
		}
		cout<<maxm1<<'\n';
	}
	else if(n<=2000&&m==n){
		long long maxmn=a[1];
		for(int i=2;i<=n;i++){
			maxmn=maxmn&a[i];
		}
		cout<<maxmn<<'\n';
	}
	else if(n<=2000&&m==2){
		long long maxm2=0,maxm21=0;
		for(int i=1;i<=n;i++){
			maxm2=max(maxm2,a[i]);
			if(maxm2==a[i])zs=i;
		}
		a[zs]=0;
		for(int i=1;i<=n;i++){
			maxm21=max(maxm21,a[i]);
		}
		maxm2=maxm2&maxm21;
		cout<<maxm2<<'\n';
	}
	else{
		DFS(1,-1,0);
	} 
	
	
	return 0;
}
