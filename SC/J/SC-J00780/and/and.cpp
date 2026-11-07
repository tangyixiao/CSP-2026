#include<bits/stdc++.h>
#define N 200005
using namespace std;
long long ans,maxn;
int n,m,idx;
long long a[N];
bool f[N];
int b[N];
void dfs(int x,int cnt){
	if(x==m+1){
		maxn=a[b[1]];
		for(int i=2;i<=m;i++)maxn&=a[b[i]];
		ans=max(maxn,ans);
	}
	for(int i=cnt;i<=n;i++){
		if(!f[i]){
			b[x]=i;
			f[i]|=1;
			dfs(x+1,i);
			f[i]&=0;
		}
	}
}
bool cmp(long long x,long long y){return x>y;}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	dfs(1,1);
	printf("%lld",ans);
	return 0;
}