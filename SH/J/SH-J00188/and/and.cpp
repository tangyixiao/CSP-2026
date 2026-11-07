#include<bits/stdc++.h>
using namespace std;
int a[1000005],vis[1000005],sum=-1,n;
void super(int ans,int k,int m)
{
	if(k>m)
	{
		sum=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++)
	{	
		if(vis[i]==0)
		{
			vis[i]=1;
			super(ans&a[i],k+1,m);
			vis[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);	
	freopen("and.out","w",stdout);
	int q,i=0,j=0;
	scanf("%d %d",&n,&q);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(q==1)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]>=sum)
			{
				sum=a[i];
			}
		}
	}
	else if(q==n)
	{
		sum=a[1];
		for(i=2;i<=n;i++)
		{
			sum=sum&a[i];
		}
	}
	else if(q==2)
	{
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				sum=max(a[i]&a[j],sum);
			}
		}
	}
	else 
	{
		for(i=1;i<=n-q;i++)
		{	
			vis[i]=1;
			super(a[i],2,q);
			vis[i]=0;
		}
	}
	printf("%d",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;	
	
 } 
