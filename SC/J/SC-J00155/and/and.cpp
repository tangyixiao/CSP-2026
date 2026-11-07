#include<bits/stdc++.h>
using namespace std;
int n,m,b;
long long a[200010],ans,k;
bool f[1073741830];
void dfs(long long sum,int gs)
{
	if(gs==m)
	{
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(f[a[i]]==1)
		{
			f[a[i]]=0;
			dfs((a[i] & sum),gs+1);
			f[a[i]]=1;
		}
		
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(m==n-1)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ans & a[i];
		}
		for(int i=1;i<=n;i++)
		{
			k=max(k,(ans & a[i]));
		}
		cout<<k;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		f[a[i]]=0;
		dfs(a[i],1);
		f[a[i]]=1;
	}
	cout<<ans;
	return 0;
}