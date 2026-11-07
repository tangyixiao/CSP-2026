#include<bits/stdc++.h>
#define ls ch[u][0]
#define rs ch[u][1]
#define mid ((l+r)>>1)
#define int long long
using namespace std;
int n,a[200005],M;
char c[200005];
long long sum[200005],len,ans;
int s[40000005],bj[40000005];
signed ch[40000005][2],tot;
struct tree{
	int rt;
	inline void apply(int u,int v,int l,int r){s[u]+=(r-l+1)*v,bj[u]+=v;}
	inline void up(int u){s[u]=s[ls]+s[rs];}
	inline void down(int u,int l,int r){
		if(!ls)ls=++tot;
		if(!rs)rs=++tot;
		apply(ls,bj[u],l,mid);
		apply(rs,bj[u],mid+1,r);
		bj[u]=0;
	}inline void modify(int L,int R,int v,int u,int l=1,int r=len){
		if(L>r||l>R||l>r||L>R)return;
		if(L<=l&&r<=R)return apply(u,v,l,r);
		down(u,l,r);
		if(L<=mid)modify(L,R,v,ls,l,mid);
		if(mid<R) modify(L,R,v,rs,mid+1,r);
		up(u);
	}inline int query(int L,int R,int u,int l=1,int r=len){
		if(L<=l&&r<=R)return s[u];
		if(bj[u])down(u,l,r);
		int ret=0;
		if(L<=mid&&ls)ret+=query(L,R,ls,l,mid);
		if(mid<R&&rs) ret+=query(L,R,rs,mid+1,r);
		return ret;
	}
}tr[26];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<26;++i)tr[i].rt=++tot;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		sum[i]=sum[i-1]+a[i];
		len+=a[i];
	}for(int i=1;i<=n;++i){
		tr[c[i]-'a'].modify(sum[i-1]+1,sum[i],1,tr[c[i]-'a'].rt);
	}M=(len+1)/2;
	for(int i=1;i<=n;++i){
		if(sum[i-1]+1>(len+1)/2)break;
		int L=sum[i-1]+1,R=min(sum[i],M);
		ans+=(R-L+1)-tr[c[i]-'a'].query(len-R+1,len-L+1,tr[c[i]-'a'].rt);
	}printf("%lld\n",ans);
}