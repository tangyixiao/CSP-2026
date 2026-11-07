#include<bits/stdc++.h>
using namespace std;
#define lx x*2
#define rx x*2+1
const int N=5e5+5;
int n,m,a[N],last[N],ans[N],id,b[N],last1[N],c[N];
int t[4*N];
void add(int x,int l,int r,int l1,int r1)
{
	int mid=(l+r)/2;
	//cout<<l<<" "<<r<<' '<<mid<<' '<<l1<<' '<<r1<<"\n";
	if(l>=l1&&r<=r1)
	{
		t[x]=1;
		return ;
	}
	if(mid<r1) add(rx,mid+1,r,l1,r1);
	if(mid>=l1) add(lx,l,mid,l1,r1);
}
int ask(int x,int l,int r,int p)
{
	int mid=(l+r)/2;
	if(l==r) return t[x];
	if(t[x]) t[lx]=t[rx]=1;
	if(mid>=p) return ask(lx,l,mid,p);
	else return ask(rx,mid+1,r,p);
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) last1[i]=n+1;
	for(int i=n;i>=1;i--)
	{
		last[i]=last1[a[i]];
		last1[a[i]]=i;
	}
	//for(int i=1;i<=n;i++) cout<<last[i]<<" ";
	//cout<<ask(1,1,n,last[i]);
	for(int i=n;i>=1;i--)
	{
		if(last[i]==n+1||ask(1,1,n+1,last[i]))
		{
			b[++id]=i;
		}else{
			add(1,1,n+1,i+1,last[i]);
			while(id)
			{
				if(b[id]<=last[i])
				{
					ans[a[b[id]]]+=(b[id]-i);
					//cout<<id<<' '<<b[id]<<' '<<a[b[id]]<<' '<<b[id]-i<<"\n";
					id--;
				}
				else break;
			}
			b[++id]=i;
		}
	}
	for(int i=1;i<=id;i++) ans[a[b[i]]]+=b[i];
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}