#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,ans=0;
long long a[N];
long long t[N];
bool vis[N];
void dfs(int p){
	if(p==m+1){
		long long x=t[1];
		for(int i=2;i<=m;i++){
			x=x&t[i];
		}
		ans=max(ans,x);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==1) continue;
		vis[i]=1;
		t[p]=a[i];
		dfs(p+1);
		vis[i]=0;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(vis,0,sizeof(vis));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	dfs(1);
	cout<<ans;
	return 0;
}