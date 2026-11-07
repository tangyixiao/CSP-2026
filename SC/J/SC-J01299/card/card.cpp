#include<bits/stdc++.h>
using namespace std;
int a[500010],lt[500010];
vector<int>e[500010];
int fa[500010],n,m;
struct node{
	int l,r,lzy,w,sm;
}tr[2000010];
void push_up(int u){
	tr[u].w=tr[u<<1].w+tr[u<<1|1].w;
	tr[u].sm=tr[u<<1].sm+tr[u<<1|1].sm;
}
void push_down(int u){
	if(tr[u].lzy){
		int t=tr[u].lzy;
		tr[u<<1].lzy+=t;
		tr[u<<1|1].lzy+=t;
		tr[u<<1].w+=t*tr[u<<1].sm;
		tr[u<<1|1].w+=t*tr[u<<1|1].sm;
		tr[u].lzy=0;
	}
}
void build(int u,int l,int r){
	tr[u].l=l;tr[u].r=r;
	if(l==r){
		tr[u].w=tr[u].sm=0;
		return;
	}
	int mid=(l+r)>>1;
	build(u<<1,l,mid);
	build(u<<1|1,mid+1,r);
}
void update(int u,int x,int k){
	if(x<tr[u].l||tr[u].r<x)return;
	if(tr[u].l==tr[u].r){
		tr[u].sm+=k;return;
	}
	push_down(u);
	update(u<<1,x,k);update(u<<1|1,x,k);
	push_up(u);
}
void solve(int u){
	if(tr[u].l==tr[u].r){
		cout<<tr[u].w<<" ";
		return;
	}
	push_down(u);
	solve(u<<1);solve(u<<1|1);
}
int find(int x){
	if(fa[x]==x)return x;
	else return fa[x]=find(fa[x]);
} 
void merge(int x,int y){
	x=find(x),y=find(y);
	if(x!=y){
		if(x>y)swap(x,y);
		fa[x]=y;
	}
}
void dfs(int u){
	if(u!=n+1){
		update(1,a[u],1); 
		tr[1].lzy+=1;
		tr[1].w+=tr[u].sm;
	}
	for(int v:e[u]){
		dfs(v);
	}
	update(1,a[u],-1); 
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;build(1,1,m);
	for(int i=1;i<=n;i++){
		cin>>a[i];fa[i]=i;
	}
	for(int i=n;i>=1;i--){
		if(lt[a[i]]){
			merge(i,lt[a[i]]);
		}
		e[find(i)+1].emplace_back(i);
		lt[a[i]]=i;
	}
	dfs(n+1);solve(1);
	return 0;
}

/*
关注洛谷 hb314 ，欣赏时代巨作《周桐玥武的算法圣殿》 
*/