#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll a[200005],n,m,maxx=-1,mx=-1,cntx=-1;
bool vis[20005];
void dfs(int c,int k)
{
	if(k==m) maxx=max(maxx,c);
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(a[i]&c,k+1);
			vis[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		mx=max(mx,a[i]);
	}
	if(n<=20)
	{
		dfs(1023*1024-1,0);
		cout<<maxx;
	}
	else if(m==n)
	{
		cntx=a[1];
		for(int i=2;i<=n;i++)
		{
			cntx=cntx&a[i];
		}
		cout<<cntx;
	}
	else if(n==2)
	{
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
			{
				cntx=max(cntx,a[i]&a[j]);
			}
		cout<<cntx;	
	}
	else if(m=n-1)
	{
		for(int i=1;i<=n;i++)
		{
			int yy=1<<21-1;
			for(int j=1;i<=n&&j!=i;j++)
			{
				yy=yy&a[j];
			}
			cntx=max(cntx,yy);
		}
		cout<<cntx;	
	}
	else if(m==1)
	{
		cout<<mx;
	}
	else
	{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
}
