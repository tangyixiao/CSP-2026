#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long n,m,res=0,a[MAXN];
bool vis[MAXN]={0};
void dfs(long long depth,long long ad,long long pos){
	vis[pos]=1;
	if(depth>=m) {vis[pos]=0;return;}
	for (int i=0;i<n;i++){
		if(pos+i<n&&!vis[pos+i]) {dfs(depth+1,ad&a[pos+i],pos+i);}
	}
	res=max(res,ad);
	vis[pos]=0;
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++) scanf("%lld",a+i);
	for (int i=0;i<n-1;i++) dfs(0,a[i]&a[i+1],i);
	printf("%lld",res);
	return 0;
}