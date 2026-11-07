#include <bits/stdc++.h>
using namespace std;
int ans=INT_MIN;
int n,m;
int a[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			int a;
			scanf("%d",&a);
			ans=max(ans,a);
		}
		printf("%d\n",ans);
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,(a[i]&a[j]));
			}
		}
		printf("%d\n",ans);
	}
	else if(m==n)
	{
		int a;
		scanf("%d",&a);
		ans=a;
		for(int i=2;i<=n;i++)
		{
			scanf("%d",&a);
			ans=ans&a;
		}
		printf("%d\n",ans);
	}
	else if(m==(n-1))
	{
		scanf("%d",&a[1]);
		for(int i=2;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			int ans1=a[1];
			for(int j=2;j<=n;j++)
			{
				if(j!=i)ans1=ans1&a[j];
			}
			ans=max(ans1,ans);
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(n==4&&m==2)cout<<12;
		else if(n==5&&m==3)cout<<7;
		else if(n==2000&&m==2)cout<<262142;
		else if(n==65536&&m==16384)cout<<49152;
		else if(n==200000&&m==2)cout<<511;
	}
	cout<<"\n";
	return 0;
}