#include <bits/stdc++.h>
using namespace std;
int a[1000005],n,num[1000005],m,p[1000005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1+i-1;j<=n;j++)
		{
			int y=1;
			while(y<=n)
			{
				if(p[y]==a[i])
				{
					int z=1;
					while(p[z]!=0)
					{
						p[z]=0;
						z++;
					}
				}
				y++;
			}
			p[j]=a[j];
		}
		for(int j=1;j<=m;j++)
		{
			bool f=false;
			for(int y=1;y<=n;y++)
			{
				if(p[y]==j)
				{
					f=true;
					break;
				}
			}
			if(f==true)
			{
				num[j]++;
			}
		}
		for(int j=1;j<=n;j++)
		{
			p[j]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << num[i] << " ";
	}
	return 0;
}
