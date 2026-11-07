#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500100],b[500100],c[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		memset(b,0,sizeof(b));
		int p=1;
		for (int j=i;j<=n;j++)
		{
			for (int y=1;y<=p;y++)
			{
				if(b[y]==a[j])
				{
					for (int o=y;o<=p;o++)
					{
						b[o]=0;
					}
					break;
				}
			}
			b[p]=a[j];
			p++;
		}
		for (int j=1;j<=p;j++)
		{
			for (int y=1;y<=m;y++)
			{
				if(b[j]==y)
				{
					c[y]++;
				}
			}
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
