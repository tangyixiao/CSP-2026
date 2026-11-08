#include<bits/stdc++.h>
using namespace std;
int n,m,maxx=-1000;
int a[200005],f[200005];
bool vis[200005];
void dfs(int pos){
	if(pos==m+1){
		int result=f[1];
		for(int i=1;i<=m;i++) {
			result&=f[i];
			//cout<<f[i]<<' ';
		}
		//cout<<endl;
		maxx=max(maxx,result);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			f[pos]=a[i];
			dfs(pos+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);	
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1);
	cout<<maxx;
	return 0;
}
