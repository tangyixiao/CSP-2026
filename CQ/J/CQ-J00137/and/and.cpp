#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],cnt=-1e9,vis[N],p[N];
void dfs(int g){
	if(g==m){
		int y=vis[1];
		for(int i=0;i<m;i++){
			y&=vis[i];
		}
		if(y>cnt){
			cnt=y;
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(p[i]==1) continue;
		p[i]=1;
		vis[g]=a[i]; 
		dfs(g+1);
		p[i]=0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	dfs(0);
	cout<<cnt;
	return 0;
}
