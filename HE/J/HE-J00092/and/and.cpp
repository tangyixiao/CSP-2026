#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
long long n,m,a[N],ans;
bool used[N];
inline void dfs(long long cnt,long long sum){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;++i){
		if(!used[i]){
			used[i]=true;
			dfs(cnt+1,(sum&a[i]));
			used[i]=false;
		}
	}
}
inline void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i){
		used[i]=true;
		dfs(1,a[i]);
		used[i]=false;
	}
	cout<<ans;
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	solve();
	
	return 0;
}
