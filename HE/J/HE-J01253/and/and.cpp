#include<bits/stdc++.h>
using namespace std;
int a[200005];
int ans=-1;
int n,m;
void dfs(int need,int now,int k,int num){
	if(need==now){
		ans=max(ans,num);
		return ;
	}else if(k==n+1){
		return ;
	}else{
		dfs(need,now,k+1,num);
		dfs(need,now+1,k+1,num&a[k]);
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(m,0,1,2147483647);
	cout<<ans;
	return 0;
}
