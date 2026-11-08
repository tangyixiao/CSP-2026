#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	int m;
	int a[10000000];
	int e[1000000][100000000];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			e[i][j]=a[j];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				if(e[i][j]==e[i][k])
				{
					for(int x=j;x<=k;i++)
					{
						e[i][x]=0;
					}
				}
			}
		}
	}
	int w[10000]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(e[i][j]!=0)
			{
				w[e[i][j]]++;
			}
			
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<w[i];
	}
	return 0;
 }
