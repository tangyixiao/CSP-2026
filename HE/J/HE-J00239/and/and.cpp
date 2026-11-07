#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+7;
int a[N],ans,n,m;
void dfs(int x,int y,int sum){
	if(y==m){
		ans=max(ans,sum);return ;
	}
	if(x>n||y>m) return ;
	if(y!=0) dfs(x+1,y+1,sum&a[x]);
	else dfs(x+1,y+1,a[x]);
	dfs(x+1,y,sum);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;return 0;
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}
