#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],ans,idx;
void dfs(int k){
	if(k<0) return;
	sort(a+1,a+n+1);
	if((a[n-m+1]>>k)&1){
		ans+=(1<<k);
		idx=0;
		for(int i=n;i>=1&&((a[i]>>k)&1)==1;--i) b[++idx]=a[i]%(1<<k);
		n=idx;
		for(int i=1;i<=n;++i) a[i]=b[i];
	}
	else for(int i=1;i<=n;++i) a[i]%=(1<<k);
	dfs(k-1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	dfs(29);
	cout<<ans;
	return 0;
}
