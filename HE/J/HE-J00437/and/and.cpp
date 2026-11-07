#include<bits/stdc++.h>
#define lowbit(x) ((x)&(-x))
using namespace std;
int n,m,ans,nx,xans;
struct node
{
	int x,num;
}a[200005],b[200005];
int nu1(int a)
{
	int ans=1;
	while(a)a-=lowbit(a),ans++;
	return ans;
}
bool cmp(node x,node y)
{
	if(x.num==y.num)return x.x>y.x;
	return x.num>y.num;
}
bool cmp1(node x,node y)
{
	int cx=nu1(a[nx].x&x.x),cy=nu1(a[nx].x&y.x);
	if(cx==cy)return x.x>y.x;
	return cx>cy;
}
bool fl=1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x;
		if(a[i].x!=i-1)fl=0;
		a[i].num=nu1(a[i].x);
	}
	if(fl)
	{
		int l=1,r=n,ans=0;
		while(l<r)
		{
			int mid=(l+r)>>1;
			ans*=2;
			if(m<=mid)r=mid,ans++;
			else l=mid+1;
		}
		cout<<ans;
		return 0;
	}
	if(n==1)
	{
		int ma=-1;
		for(int i=1;i<=n;i++)ma=max(ma,a[i].x);
		cout<<ma;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int mac=a[1].num;
	nx=1;
	for(int i=1;i<=n;i++)b[i]=a[i];
	while(a[nx].num==mac)
	{
		sort(b+1,b+n+1,cmp1);
		ans=a[nx].x;
		for(int i=1;i<=m;i++)ans&=b[i].x;
		xans=max(xans,ans);
		nx++;
	}
	cout<<xans;
	return 0;
}
