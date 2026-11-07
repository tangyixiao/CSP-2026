#include<bits/stdc++.h>
using namespace std;
const int N=2e8;
int a[N],b[N],c[N];
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
		for(int j=1;j<=n;j++)
		{
			b[j]=a[j];
			for(int k=j-1;k>=1;j--)
			{
				if(b[j]==b[k])
				{
					for(int e=j-1;e>=k;e--)
					{
						cout<<b[e];
						b[e]=0;
					}
				}
			}
		}
		for(int f=1;f<=n;f++)
		{
			for(int x=1;x<=m;x++)
			{
				if(b[f]==x) c[x]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}