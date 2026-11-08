#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],ans;
char c[200005];
void dfs(int l,int r){
	if(l>=r)return;
	if(a[l]==0)return dfs(l+1,r);
	if(a[r]==0)return dfs(l,r-1);
	int t=min(a[l],a[r]);
	a[l]-=t;
	a[r]-=t;
	ans+=t*(c[l]!=c[r]);
	dfs(l,r);
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	dfs(1,n);
	cout<<ans;
	return 0;
}//rp++