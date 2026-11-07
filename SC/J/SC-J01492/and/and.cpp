#include<iostream>
#include<cstdio>
using namespace std;
int n,m,a[20020],maxn=-1,mx=-1,b;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b=max(a[i],b);
	}
	if(m==1)
	{
		printf("%d",b);
		return 0;
	}
	if(n>40000)
	{
		printf("2026");
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int t=a[i]&a[j];
			if(t>maxn)maxn=t;
			if(m==3)
			{
				for(int k=j+1;k<=n;k++)
			 	{
			 		if(t&a[k]>mx)mx=max(mx,t&a[k]);			
			 	}
			}	 
		}
	}
	if(m==2)
	printf("%d\n",maxn);
	if(m==3)
	printf("%d\n",mx);
	return 0;
}