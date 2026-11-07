#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200010];
void dfs(int x,int y,int s){
	if(y==m){
		ans=max(ans,s);
		return ;
	}if(x>=n)return ;
	for(int i=x+1;i<=n;i++){
		if(x==0)dfs(i,y+1,a[i]);
		dfs(i,y+1,s&a[i]);
	}return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(0,0,0);
	cout<<ans;
	return 0;
}
