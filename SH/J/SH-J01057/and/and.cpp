#include<bits/stdc++.h>
using namespace std;
int a[200010];
bool vis[200010];
int n,m,maxn=-1;
void dfs(int step,int ans){
	if(step==m){
		maxn=max(maxn,ans);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			int p=(ans&a[i]);
			dfs(step+1,p);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int df=1;
	for(int i=0;i<20;i++){
		df*=2;
	}
	df--;
	dfs(0,df);
	cout<<maxn;
	return 0;
}
