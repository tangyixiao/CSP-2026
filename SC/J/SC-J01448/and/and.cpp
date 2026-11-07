#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans;
int a[200050];
int vis[200050];
void dfs(int wz,int sum,int num){
	if(num==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(i,sum&a[i],num+1);
			vis[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,INT_MAX,0);
	cout<<ans;
	return 0;
}