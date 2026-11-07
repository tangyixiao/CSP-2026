#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1;
void dfs(int now,int s,int k){
	if(s<=ans&&k!=0)return;
	if(k==m){
		ans=max(ans,s);
		return;
	}
	if(now>n)return;
	if(k==0&&now<=n-m+1){
		dfs(now+1,a[now],1);
	}
	if(k>0) dfs(now+1,s&a[now],k+1);
	dfs(now+1,s,k);
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