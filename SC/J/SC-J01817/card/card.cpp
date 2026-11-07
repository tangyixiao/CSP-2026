#include<bits/stdc++.h>
using namespace std;
int n,m,m2,cnt=0,a[20010],b[20010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)//局数 
	{
		for(int j=i;j<=n;j++)//打出牌数 
		{
			a[j]=b[j];
		}
	}
	for(int i=1;i<=n;i++)//局数 
	{
		for(int j=i;j<=n;j++)//打出牌数 
		{
			for(int k=1;k<=a[j];k++)
			{
				if(a[j]=b[k])
				{
					for(int l=k;l<=n;l++)
					{
						b[l]=-1;
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(b[i]!=-1)
			{
				m2++;
			}
			if(m2=m)
			{
				cnt++;
			}
		}
	}
	
	
	cout<<cnt;
	return 0;
}