#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=2e5+5;
int n,m,x,a[N],ans,vis[N],c[N];
void dfs(int x)
{
//	vis[y]=1;
	if(x>m)
	{
		int x=0;
//		ans=max(ans,val);
		x=c[1];
		for(int i=2;i<=m;i++)
		{
			x&=c[i];
		}
		ans=max(ans,x);
//		cout<<'\n';
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			c[x]=a[i];
			dfs(x+1);
			vis[i]=0,c[x]=0;
		}
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0); 
	cin>>n>>m>>a[1];
	int maxn=a[1],x=a[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]),x&=a[i];	
	}
	if(n<=20)
	{
		for(int i=1;i<=n;i++)
		{
			dfs(i);
		}	 
		cout<<ans;
		return 0;
	}
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n&&j!=i;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n)
	{
		cout<<x;
		return 0;
	}
	if(m==n-1)
	{
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,x&a[i]);
		}
		cout<<ans;
		return 0;
	}
	cout<<0;
	return 0;
 } 
 /*

 */