#include<bits/stdc++.h>
using namespace std;
int a[200005],f[200005],vis[200005];
int n,m,maxn=0;
void dfs(int x,int y){
	if(y==1+m){
		int an=f[1];
		for(int i=1;i<=m;i++){
//			cout<<f[i]<<" ";
			an&=f[i];
		}
//		cout<<an<<endl;
		maxn=max(maxn,an);
		return; 
	}
	if(x>n)return;
	for(int i=x;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			f[y]=a[i];
			dfs(x+1,y+1);
			f[y]=0;
			vis[i]=0;
			dfs(x+1,y);
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++)maxn=max(maxn,a[i]);
	}
	else if(m==n){
		maxn=a[1];
		for(int i=1;i<=n;i++)maxn&=a[i];
	}
	else dfs(1,1);
	cout<<maxn;
	return 0;
}
