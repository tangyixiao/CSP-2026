#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	int m;
	cin>>n>>m;
	int a[n+2];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int zm[n+2];
	int cnt[m+2]={0};
	int k=1;
	int zmp=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int p=1;p<=zmp;p++)
			{
				if(zm[p]==a[j])
				{
					for(int h=p;h<=zmp;h++)
					{
						zm[h]=0;
					}
					zmp=p-1;
					break;
				}
			}
			zmp++;
			zm[zmp]=a[j];
		}
		for(int j=1;j<=zmp;j++)
		{
			cnt[zm[j]]++;
			zm[j]=0;
		}
		zmp=0;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	
	return 0;
}
