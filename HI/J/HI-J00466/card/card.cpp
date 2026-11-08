#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000],c[1000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int t=1;t<=n;t++)
	{
		for(int w=1;w<=n;w++)
		{
			b[w]=0;
		}
		for(int i=t;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				if(a[i]==b[j])
				{
					for(int x=j;x<=n;x++)
					{
						b[x]=0;
					}
					break;
				}
			}
			b[i]=a[i];
		}
		for(int y=1;y<=m;y++)
		{
			for(int q=1;q<=n;q++)
			{
				if(b[q]==y)
				{
					c[y]++;
					break; 
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(c[i])
		{
			cout<<c[i]<<" ";
		}
	}
	return 0;
}
