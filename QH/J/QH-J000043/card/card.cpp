#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[300005],n,p[300005],s=2,m;//s为剩下的牌开始的坐标 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int ans[n+5];
	for(int i=1;i<=n+5;i++)
	{
		ans[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			p[i]=a[i];
			s=k;
			for(int j=s+1;j<=i;j++)
			{
				if(p[i]==p[j])
				{
					s=i;
					for(int u=s+1;u<=i;u++)
					{
						p[u]=0;
					}
				}
			}
			
		}
		for(int o=k;o<=n;o++)
		{	
			ans[p[o]]++;
			
			
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	
	
}

 

