#include<bits/stdc++.h>
using namespace std;
const int N=2e6+10;
int n,m,val[N];
int head[N],cnt;
struct node{
	int v,next;
}a[N];
void add(int u,int v){
	a[++cnt]=(node){v,head[u]};
	head[u]=cnt;
}
int nxt[N],siz[N],ans[N];
void dfs(int d){
	siz[d]=1;
	for(int i=head[d];i;i=a[i].next){
		int v=a[i].v;
		dfs(v);
		siz[d]+=siz[v];
	}
	ans[val[d]]+=siz[d];
}
int main(){
//	freopen("C:\\Users\\user\\Desktop\\输入.txt","r",stdin);
//	freopen("C:\\Users\\user\\Desktop\\输出.txt","w",stdout);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&val[i]);
	for(int i=n;i>=1;i--){
		if(nxt[val[i]]==0){
			add(i+1,i);
			nxt[val[i]]=i;
		}
		else{
			add(nxt[val[i]]+1,i);
		}
	}
	dfs(n+1);
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}