#include<bits/stdc++.h>
using namespace std;
const long long timemax=1e8;
int n,m;
long long ans=0,times=0;
long long a[200005];
void dfs(int now1,int now2,long long re){
	if(n-now1+1<m-now2) return;
	if(re<=ans&&re!=0) return;
	if(times>=timemax) cout<<ans,exit(0);
	if(now2==m){
		ans=max(ans,re);
		return;
	} 
	times++;
	if(now2==0) dfs(now1+1,1,a[now1]),dfs(now1+1,0,0);
	else dfs(now1+1,now2,re),dfs(now1+1,now2+1,re&a[now1]);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1,0,0);
	cout<<ans;
	return 0;
}