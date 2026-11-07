#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m,a[N],ans,e[N];
void dfs(int u,int l){
	if(u>m){
		int res=e[1];
		for(int i=1;i<=m;i++){
			res&=e[i];
		}ans=max(ans,res);
		return;
	}
	for(int i=l;i<=n-m+u;i++){
		e[u]=a[i];
		dfs(u+1,i+1);
		e[u]=0;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,1);
	cout<<ans;
	return 0;
} 
