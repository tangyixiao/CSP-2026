#include<bits/stdc++.h>
using namespace std;
int n,m,ans=-1;
int a[200005];
void dfs(int x,int now,int sum){
	if(now==m){
		ans=max(ans,sum);
		return ;	
	}
	for(int i=x+1;i<=n;i++){
		if((sum&a[i])>ans) dfs(i,now+1,(sum&a[i]));
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}
