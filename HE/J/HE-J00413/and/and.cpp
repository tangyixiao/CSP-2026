#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
long long a[N],vis[N],sum[N];
long long  n,m;
long long ans=0;
void dfs(int x){
	if(x>m){
		long long summ=sum[1];
		for(int i=2;i<=m;i++) summ&=sum[i];
		if(summ>ans) ans=summ;
		return;
	}
	dfs(x+1);
	for(int i=1;i<=n;i++){
		if(!vis[i]) {
			vis[i]=1;
			sum[x]=a[i];
			dfs(x+1);
			sum[x]=0;
			vis[i]=0;
		}
	}
}
void solved(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1);
	cout<<ans;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
//	int t; cin>>t; while(t--) 
	solved();
	
	return 0;
} 
