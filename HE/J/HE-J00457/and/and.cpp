#include<bits/stdc++.h>
using namespace std;
int n,m,a[200100],ans;
bool mark[200100];
void dfs(int x,int y,int cnt){
	if(y==m){
		ans=max(ans,cnt);
		return ;
	}
	mark[x]=true;
	for(int i=x+1;i<=n-m+y+1;i++){
		if(!mark[i]){
			dfs(i,y+1,cnt&a[i]);
		}
	}
	mark[x]=false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}
