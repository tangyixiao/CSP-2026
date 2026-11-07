#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
void dfs(int st,int sum,int step){
	if(step==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=st+1;i<=min(n,n-m+step+1);i++){
		if(step==0) dfs(i,a[i],step+1);
		else dfs(i,sum&a[i],step+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(0,0,0);
	cout<<ans;
	return 0; 
} 
