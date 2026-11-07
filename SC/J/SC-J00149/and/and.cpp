#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],Max=-1;
void dfs(int depth,int c,int ans)
{
	if(depth<=n&&c<=m)
	{
		if(n-depth+1<m-c)return;
		if(c==m)
		{
			Max=max(Max,ans);
			return;
		}
		if(depth==n&&c==m-1)
		{
			Max=max(Max,ans&a[depth]);
			return;
		}
		for(int i=depth;i<=n;i++)
		{
			int t=ans&a[i];
			if(ans==-1)t=a[i];
			dfs(i+1,c+1,t);
			dfs(i+1,c,t);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	bool p=true;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i-1)p=false;
	}
	sort(a+1,a+n+1);
	if(m==1)printf("%d",a[n]);
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)
		ans&=a[i];
		printf("%d",ans);
	}
	else if(m==2)
	{
		int Max1=-1;
		for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		Max1=max(Max1,a[i]&a[j]);
		printf("%d",Max1);
	}
	else if(p)
	{
		int t=a[n];
		for(int i=n-1;i>=n-m+1;i--)
		t&=a[i];
		printf("%d",t);
	}
	else 
	{
		dfs(1,0,-1);
		printf("%d",Max);
	}
	return 0;
}