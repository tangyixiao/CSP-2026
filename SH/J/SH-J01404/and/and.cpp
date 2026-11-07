#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
bool vis[200020];
void dfs(int x, int k, int aand){
	//vis[x]=1;
	if(k==m){
		ans=max(ans,aand);
		return ;
	}
	for(int i = x+1; i <= n; i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(i,k+1,aand&a[i]);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0,0,2147483647);
	cout << ans;
	/*
	4 2
3 15 12 12
	*/
	return 0;
}
