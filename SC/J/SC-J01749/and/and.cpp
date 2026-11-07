#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+100;
int n,a[maxn],s[maxn],k,ans=-LONG_LONG_MAX;
bool vis[maxn];
void dfs(int cnt,int ddd){
	if(cnt==1){
		ans=max(ans,ddd);
//		cout<<'\n';
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==false){
			vis[i]=true;
//			cout<<a[i]<<" ";
			dfs(cnt-1,ddd&a[i]);
			vis[i]=false;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=true;
//		cout<<a[i]<<" ";
		dfs(k,a[i]);
		vis[i]=false;
		
	}
	cout<<ans;
	return 0;
}