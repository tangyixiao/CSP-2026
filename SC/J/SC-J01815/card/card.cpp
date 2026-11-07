#include<bits/stdc++.h>
using namespace std;
int n,m,a[510000],b[310000],cnt;
int f[310000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(n--)
	{
		memset(f,0,sizeof(f));
		for(int i=cnt;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					for(int k=i;k<j;k++)
					{
						f[k]=-1;
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(f[i]!=-1)f[a[i]]=1;
		}
		for(int i=0;i<n;i++)
		{
			if(f[i]==1)b[a[i]]++;
		}
		cnt++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}