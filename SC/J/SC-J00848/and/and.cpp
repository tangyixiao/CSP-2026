#include<bits/stdc++.h>
#define ll long long
using namespace std;
const long long N=2e5+5;
const int MAX=1<<20;
int n,m;
ll a[N];
ll f[N];
bool vis[N];
int ans;
void dfs(int cnt,int sum){
	if(cnt==m) {
		if(sum>ans)ans=sum;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(cnt+1,sum&a[i]);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(1,a[i]);
		vis[i]=0;
	}
	cout<<ans;
	return 0;
}