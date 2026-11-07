#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long ans;
int n,m;
void dfs(int d,int cnt,long long sum){
	if(cnt==m){
		ans = max(sum,ans);
		return;
	}
	if(d==n+1) return;
	if(sum==0){
		dfs(d+1,cnt+1,a[d]);
		dfs(d+1,cnt,0);
	}
	else{
		dfs(d+1,cnt+1,sum&a[d]);
		dfs(d+1,cnt,sum);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	dfs(1,0,0);
	cout << ans;
	return 0;
}
