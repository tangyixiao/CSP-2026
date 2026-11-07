#include <bits/stdc++.h>
using namespace std;
#define ls (id<<1)
#define rs (id<<1|1)
const int N=5e5+5;
int ans[N],a[N],lst[N],ans1[N];
struct node
{
	int w,laz;
}tr[N<<2];
void down(int id)
{
	tr[ls].w+=tr[id].laz;tr[ls].laz+=tr[id].laz;
	tr[rs].w+=tr[id].laz;tr[rs].laz+=tr[id].laz;
	tr[id].laz=0;
}
void upd(int id,int l,int r,int ql,int qr,int w)
{
	if(ql>qr) return;
	if(ql<=l&&qr>=r) {tr[id].laz+=w;tr[id].w+=w;return;}
	down(id);
	int mid=(l+r)>>1;
	if(ql<=mid) upd(ls,l,mid,ql,qr,w);
	if(qr>mid) upd(rs,mid+1,r,ql,qr,w);
}
int query(int id,int l,int r,int qid)
{
	if(l==r) return tr[id].w;
	down(id);
	int mid=(l+r)>>1;
	if(qid<=mid) return query(ls,l,mid,qid);
	else return query(rs,mid+1,r,qid);
}
signed main()
{
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		lst[a[i]]=i;
		ans1[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		int x=query(1,1,n,i);ans1[i]-=x;
		upd(1,1,n,i+1,lst[a[i]],ans1[i]);
	}
	for(int i=1;i<=n;i++) ans[a[i]]+=ans1[i];
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}