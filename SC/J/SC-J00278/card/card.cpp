#include<bits/stdc++.h>
#define ls(u) t[u].ch[0]
#define rs(u) t[u].ch[1]
#define mid ((l+r)>>1)
using namespace std;
int n,m,a[500005],lst[300005],rt[500005],tot,ans[300005],B;
int L[20000005],R[20000005];
bool vis[20000005];
vector<int>g[500005];
struct node{
	int sum,cnt,ch[2];
}t[20000005];
inline void apply(int u,int v,int w){t[u].sum+=v;t[u].cnt+=w;}
inline void up(int u){t[u].sum=t[ls(u)].sum+t[rs(u)].sum;}
inline void down(int u){
	if(ls(u))apply(ls(u),0,t[u].cnt);
	if(rs(u))apply(rs(u),0,t[u].cnt);
	t[u].cnt=0;
}inline void modify(int p,int v,int &u,int lst,int l=1,int r=m){
	t[u=++tot]=t[lst];
	L[u]=l,R[u]=r;
	if(l==r)return apply(u,v,0);
	if(p<=mid)modify(p,v,ls(u),ls(lst),l,mid);
	else modify(p,v,rs(u),rs(lst),mid+1,r);
	up(u);
}inline void add(int u){
	t[u].cnt++;
}inline void downall(){
	queue<int>q;
	for(int i=1;i<=n;++i)q.push(rt[i]),vis[rt[i]]=1;
	while(q.size()){
		int T=q.front();
		q.pop();
		if(L[T]==R[T])continue;
		down(T);
		if(ls(T)&&!vis[ls(T)]){
			q.push(ls(T));
			vis[ls(T)]=1;
		}if(rs(T)&&!vis[rs(T)]){
			q.push(rs(T));
			vis[rs(T)]=1;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	rt[n+1]=++tot;
	L[tot]=1,R[tot]=m;
	for(int i=n;i>=1;--i){
		if(!lst[a[i]])lst[a[i]]=i;
		modify(a[i],1,rt[i],rt[lst[a[i]]+1]);
	}for(int i=1;i<=n;++i)add(rt[i]);
	downall();
	for(int i=1;i<=tot;++i)if(L[i]==R[i])ans[L[i]]+=t[i].cnt*t[i].sum;
	for(int i=1;i<=m;++i)printf("%d ",ans[i]);
}