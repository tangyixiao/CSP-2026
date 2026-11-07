#include<bits/stdc++.h>
using namespace std;
#define mid ((l+r)>>1)
#define ls (u<<1)
#define rs ((u<<1)|1)
#define int long long
const int N=5e5+5;
int n,m,a[N],ed[N],val[N<<2],tag[N<<2],nxt[N];
void up(int u){
    val[u]=val[ls]+val[rs];
    return;
}
void upd(int u,int l,int r,int v){
    val[u]+=v*(r-l+1);
    tag[u]+=v;
    return;
}
void down(int u,int l,int r){
    upd(ls,l,mid,tag[u]);
    upd(rs,mid+1,r,tag[u]);
    tag[u]=0;
    return;
}
void modify(int u,int l,int r,int x,int y,int v){
    if(x<=l&&r<=y){
        upd(u,l,r,v);
        return;
    }
    down(u,l,r);
    if(x<=mid) modify(ls,l,mid,x,y,v);
    if(y>mid)  modify(rs,mid+1,r,x,y,v);
    return;
}
int query(int u,int l,int r,int x){
    if(l==r) return val[u];
    down(u,l,r);
    if(x<=mid) return query(ls,l,mid,x);
    return query(rs,mid+1,r,x);
}
signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        nxt[ed[a[i]]]=i;
        ed[a[i]]=i;
        modify(1,1,n,i,i,i);
    }
    // for(int i=1;i<=m;i++) printf("%d ",query(1,1,n,ed[i]));
    // puts("");
    for(int i=1;i<=n;i++){
        int f=query(1,1,n,i);
        if(nxt[i]) modify(1,1,n,i,nxt[i]-1,-f);
        // for(int i=1;i<=m;i++) printf("%d ",query(1,1,n,ed[i]));
        // puts("");
    }
    for(int i=1;i<=m;i++) printf("%lld ",query(1,1,n,ed[i]));
    puts("");
    return 0;
}