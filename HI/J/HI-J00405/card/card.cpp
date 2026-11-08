#include<bits/stdc++.h>
using namespace std;
int c[99999];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[9999],b[9999];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			b[j]=a[j];
				for(int x=1;x<j;x++)
			{
				if(b[x]=b[j])
				{
					for(int z=x;z<j;z++)
					{
						b[z]=0;
					}
					break;
				}
			}
			
		}
		for(int j=1;j<=m;j++)
		{
			for(int y=1;y<=n;y++)
			{
				if(b[i]==j)
				{
					c[j]+=1;

				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
} 
