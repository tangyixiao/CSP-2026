#include<bits/stdc++.h>
#define eb emplace_back
#define de(x...) fprintf(stderr,x)
#define rep(i,l,r) for(auto i = l;i <= r;++i)
#define per(i,l,r) for(auto i = l;i >= r;--i)
using namespace std;
const int N = 500005;
int n,m,a[N],fa[N],t[N],p[N],sz[N],ans[N];
vector<int> e[N];
void dfs(int x){
	sz[x] = 1;
	for(int y:e[x])	dfs(y),sz[x] += sz[y];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	rep(i,1,n)	scanf("%d",&a[i]);
	per(i,n,1){
		if(t[a[i]])	fa[i] = t[a[i]];
		else	fa[i] = i+1,p[i] = a[i];
		t[a[i]] = i;
	}
	rep(i,1,n)	e[fa[i]].eb(i);
	dfs(n+1);
	rep(i,1,n)	ans[p[i]] += sz[i];
	rep(i,1,m)	printf("%d%c",ans[i]," \n"[i==m]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}