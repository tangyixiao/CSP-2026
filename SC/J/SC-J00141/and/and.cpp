#include"bits/stdc++.h"
using namespace std;
#define N int(2e5+5)
//暴力搜索代码(会TLE) 
int inf,ans,n,m,a[N];
void dfs(int ad_as,int x,int cnt){
	if(ad_as<=ans) return;
	if(cnt==m){
		ans=max(ans,ad_as);
		return;
	}
	for(int i=x+1;i<=n;i++){
		if(ad_as&a[i]<=ans) continue;
		dfs(ad_as&a[i],i,cnt+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=0;i<=30;i++) inf+=1<<i;
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	dfs(inf,0,0);
	cout<<ans;
	return 0;
}