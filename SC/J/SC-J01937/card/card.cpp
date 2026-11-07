#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5;
struct Node *null,*root;
struct Node
{
	Node *son[2];
	int val,tag;
	void add(int x)
	{
		if(this==null)return;
		val+=x,tag+=x;
		return;
	}
	void down()
	{
		if(son[0]==null)son[0]=new Node{{null,null},0,0};
		if(son[1]==null)son[1]=new Node{{null,null},0,0};
		son[0]->add(tag);
		son[1]->add(tag);
		tag=0;
		return;
	}
};
int n,m,a[N],nxt[N],lst[N],ans[N];
void modify(Node *&u,int l,int r,int L,int R,int tag)
{
	if(L>R||R<l||L>r||l>r)return;
	if(u==null)u=new Node{{null,null},0,0};
	if(l<=L&&R<=r)return u->add(tag);
	u->down();
	int mid=(L+R)>>1;
	modify(u->son[0],l,r,L,mid,tag);
	modify(u->son[1],l,r,mid+1,R,tag);
	return;
}
int query(Node *u,int v,int l,int r)
{
	if(l>r||r<v||l>v)return 0;
	if(l==r)return u->val;
	u->down();
	int mid=(l+r)>>1;
	return max(query(u->son[0],v,l,mid),query(u->son[1],v,mid+1,r));
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	null=new Node{{null,null},0,0};
	root=null->son[0]=null->son[1]=null;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(lst[a[i]])nxt[lst[a[i]]]=i;
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;++i)
	{
		modify(root,i+1,nxt[i]-1,1,n,i-query(root,i,1,n));
		ans[a[i]]=max(i-query(root,i,1,n),ans[a[i]]);
	}
	for(int i=1;i<=m;++i)cout<<ans[i]<<"\n "[i<m];
	return 0;
}