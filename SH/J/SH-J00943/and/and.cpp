#include<bits/stdc++.h>
using namespace std;
int a[200009],b[200009];
bool vis[200009];
int n,m,ans=0;
void dfs(int x){
	if(x==m)  {
		int t=b[0];
		for(int i=1;i<m;i++){
			t=(t&b[i]);
		}
		if(t>=ans){
			ans=t;
		}
		//memset(vis,0,sizeof(vis));
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			b[x]=a[i];
			dfs(x+1);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(0);
	cout<<ans<<endl;
	return 0;
} 

