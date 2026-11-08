#include<bits/stdc++.h>
using namespace std;
unsigned int n,m,ans;
bool vis[200001];
unsigned int a[200001];
bool cmp(unsigned int a,unsigned int b)
{
	return a>b;
}
void dfs(unsigned int step,unsigned int sum,unsigned int bh)
{
	if(sum<=ans)
	{
		return;
	}
	if(step==m)
	{
		ans=max(ans,sum);
		return;
	}
	unsigned int top,maxand=0;
	for(int i=bh+1;(i<=n)&&(maxand<sum);i++)
	{
		if(!vis[i])
		{
			unsigned int ansand=sum&a[i];
			if(ansand>maxand)
			{
				top=i;
				maxand=ansand;
			}
		}
	}
	if(maxand>ans)
	{
		vis[top]=1;
		dfs(step+1,maxand,top);
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(unsigned int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		vis[i]=1;
		dfs(1,a[i],i);
		vis[i]=0;
	}
	printf("%d\n",ans);
	return 0;
}