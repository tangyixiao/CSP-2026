#include <bits/stdc++.h>
using namespace std;

int n,m,a[200005],maxn[200005],f[2005][2005],ans;

void dfs(int i,int cnt,int sum){
	if(i>n){
		if(cnt==m) ans=max(ans,sum);
		return;
	}
	if(cnt==0) dfs(i+1,cnt+1,a[i]);
	else dfs(i+1,cnt+1,a[i]&sum);
	dfs(i+1,cnt,sum);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn[i]=max(maxn[i-1],a[i]);
	}
	dfs(1,0,0);
	cout<<ans<<endl;
	return 0;
}
