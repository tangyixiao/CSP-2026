#include<bits/stdc++.h>
using namespace std;
int arr[1000005],ans=0,n,m;
void dfs(int layer,int c,int sum)
{
	if(c>=m)
	{
		ans=max(ans,sum);
		return;
	}
	if(layer>n)
		return;
	if(sum==0)
		dfs(layer+1,c+1,arr[layer]);
	else
		dfs(layer+1,c+1,sum&arr[layer]);
	dfs(layer+1,c,sum);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	if(n<=20)
	{
		dfs(1,0,0);
		printf("%d",ans);
	}
	if(n>20&&n<=2000)
	{
		if(m==1)
		{
			int maxv=INT_MIN;
			for(i=1;i<=n;i++)
				maxv=max(arr[i],maxv);
			printf("%d",maxv);
		}
		if(m==n)
		{
			int s=arr[1];
			for(i=2;i<=n;i++)
				s&=arr[i];
			printf("%d",s);
		}
		if(m==2)
		{
			int maxs=INT_MIN;
			for(i=1;i<=n;i++)
				for(j=1;j<=n;j++)
					maxs=max(maxs,(arr[i]&arr[j]));
			printf("%d",maxs);
		}
	}
	if(n>=200000)
	{
		if(m==n-1)
		{
			int minv=INT_MAX,sumy=0;
			for(i=1;i<=n;i++)
				minv=min(minv,arr[i]);
			for(i=1;i<=n;i++)
			{
				if(arr[i]==minv)
					continue;
				if(i==1)
					sumy=arr[i];
				else
					sumy&=arr[i];
			}
			printf("%d",sumy);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
