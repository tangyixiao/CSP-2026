#include <bits/stdc++.h>
using namespace std;
long long a[200010];
int n,m;
int ans=-1;
void dfs(int now,int x,int cnt){
	if(x==m||now>n){
		if(x!=m){
			return ;
		}
		ans=max(cnt,ans);
		return ;
	}
	if(x==0){
		dfs(now+1,x+1,a[now]);
	}
	else{
		dfs(now+1,x+1,a[now]&cnt);
	}
	dfs(now+1,x,cnt);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	dfs(1,0,0);
	cout << ans;
	return 0;
}