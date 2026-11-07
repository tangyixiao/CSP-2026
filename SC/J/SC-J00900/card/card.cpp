#include <bits/stdc++.h>

using namespace std;
int ans[30005];
int n,m,cnt=0;
int a[50005],num[20005],d[50000],p=1;//num:记录每个点数出现次数 
int f(int b)
{
	for(int i=1;i<=cnt;i++)
	{
		if(d[i]==b)
		{
			return i;
		}
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(num[a[j]]>1)
			{
				int x=f(a[j]);
				for(int k=x;k<=cnt;k++)
				{
					a[k]=0;
					cnt--;
					p--;
				}
			}
			p++;
			d[p]=a[j];
			
		}
		for(int j=1;j<=n;j++)
		{
			if(d[j]==i)
			{
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}