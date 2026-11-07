#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxn=-2e9;
void dfs(int x,int s,int step){
	if(x==m+1){
		maxn=max(maxn,s);return;
	}
	for(int i=step;i+m-x-1<=n;i++) dfs(x+1,s&a[i],i+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i+m-1<=n;i++) dfs(1,a[i],i);
	cout<<maxn;
	return 0;
}