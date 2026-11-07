#include <bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int c[500005];
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
	for(int i=1;i<=n;i++)
	{
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++)
		{
			b[j]=a[j];
			for(int k=i;k<j;k++)
			{
				if(b[j]==b[k]&&j!=k) 
				{
					for(int w=k;w<j;w++)
					{
						b[w]=0;
					}
					break;
				}
			}
			
		}
		for(int q=1;q<=n;q++)
		{	
			c[b[q]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
