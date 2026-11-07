#include<bits/stdc++.h> 
using namespace std;
int n,m;
int a[500005],la[500005];
int shu[300005],ans[300005];
vector<int> dui[500005];
struct node
{
	int l,r,v,la=-1;
}tr[1200010];
void pushup(int x)
{
	tr[x].v=tr[2*x].v+tr[2*x+1].v;
}
void pushdown(int x)
{
	if(tr[x].la==-1)return ; 
	tr[2*x].v=tr[x].la*(tr[2*x].r-tr[2*x].l+1);
	tr[2*x+1].v=tr[x].la*(tr[2*x+1].r-tr[2*x+1].l+1);
	tr[2*x].la=tr[x].la;
	tr[2*x+1].la=tr[x].la;
	tr[x].la=-1;
}
void build(int x,int l,int r)
{
	tr[x].l=l,tr[x].r=r;
	if(l==r)
		return ;
	int mid=(l+r)/2;
	build(2*x,l,mid);
	build(2*x+1,mid+1,r);
	pushup(x);
	return ;
}
void add(int x,int l,int r,int z)
{
	if(tr[x].l>r||tr[x].r<l) return ;
	if(l<=tr[x].l&&tr[x].r<=r)
	{
		tr[x].v=z*(tr[x].r-tr[x].l+1);
		tr[x].la=z;
		return ;
	}
	add(2*x,l,r,z);
	add(2*x+1,l,r,z);
	pushup(x);
	return ;
}
int ask(int x,int l,int r)
{
	if(tr[x].l>r||tr[x].r<l) return 0;
	if(l<=tr[x].l&&tr[x].r<=r)
	{
		return tr[x].v;
	}	
	pushdown(x);
	//cout<<x<<ask(2*x,l,r)<<ask(2*x+1,l,r)<<endl;
	return ask(2*x,l,r)+ask(2*x+1,l,r);
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		la[i]=shu[a[i]]==0?n+1:shu[a[i]];
		shu[a[i]]=i;
		//cout<<i<<" "<<la[i]<<endl;
	}
	build(1,1,m);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<dui[i].size();j++)
		{
			add(1,1,dui[i][j],0);
		}
		
		dui[la[i]].push_back(i);
		if(la[i]==n+1)
			ans[a[i]]=i-ask(1,1,i);
		if(la[i]!=n+1)
			add(1,1,i,1);
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
