#include<bits/stdc++.h>
using namespace std;
int m,n;
long long a[200005],d[200005],vis[200005],ans;
void dfs(int x){
	if(x==m){
		long long sum=d[1];
		for(int i=1;i<=m;i++){
		
			sum=(sum&d[i]);
		}
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			d[x+1]=a[i];
			dfs(x+1);
			vis[i]=0;
		}
	}
	
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(0);
	cout<<ans;
}
