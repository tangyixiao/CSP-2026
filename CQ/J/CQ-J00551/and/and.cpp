#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000010],ans=0;
void dfs(int x,int y,int z){
	if(z==0){
		ans=max(ans,x);
	}
	for(int i=y+1;i<=n;i++){
		int q=x&a[i];
		dfs(q,i,z-1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++){
		dfs(a[i],i,m-1);
	}
	cout<<ans;
	return 0;
}
