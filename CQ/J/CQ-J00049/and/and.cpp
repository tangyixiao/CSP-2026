#include<bits/stdc++.h>
using namespace std;
int m,n,p[32],len,ans,w[200005];
bool a[200005][32];
bool b[200005][32];
bool c[200005][32];
struct U
{
	int v;
	int t;
}u[200005];
bool bj(U a,U b)
{
	return a.v>b.v;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
		int x=w[i];
		int j=0;
		while(x>0)
		{
			int o=x%2;
			p[j]+=o;
			b[i][j]+=o;
			a[i][j++]=o;
			x/=2;
		}
	}
	for(int i=0;i<32;i++)
	{
		if(p[i]>=m)
		{
			for(int j=1;j<=n;j++)c[j][i]=b[j][i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		int x=1;
		u[i].t=i;
		for(int j=0;j<32;j++)
		{
			u[i].v+=c[i][j]*x;
			x*=2;
		}
	}
	sort(u+1,u+n+1,bj);
	ans=w[u[1].t];
	for(int i=1;i<=m;i++)
	{
		ans&=w[u[i].t];
	}
	cout<<ans;
	return 0;
}
