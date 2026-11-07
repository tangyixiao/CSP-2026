#include<bits/stdc++.h>
using namespace std;
int INF=(1<<30)-1+(1<<30);
int n,m,maxn=-INF;
int a[int(2e5+5)];
void dfs(int k,int d,int sum){
	if(n-k+1<m-d)
		return ;
	if(k>n){
		if(d<m)
			return;
		maxn=max(maxn,sum);
		return ;
	}
	if(d<=m){
		dfs(k+1,d+1,sum&a[k]);
		dfs(k+1,d,sum);
	}
	else{
		maxn=max(maxn,sum);
		return;
	}
}
int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	dfs(1,0,INF);
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}