#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
void dfs(int x,int cnt,int c){
	if(c==0) ans=max(ans,cnt);
	for(int i=x+1;i<=n;i++){
		dfs(i,cnt&a[i],c-1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-m+1;i++){
		dfs(i,a[i],m-1);
	}
	cout<<ans;
	return 0;
}
