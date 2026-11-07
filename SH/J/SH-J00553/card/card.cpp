#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
int a[500005];
int cnt[500005];
int sum[500005];
int n,m;
int f[500005];
int g[500005];
int sz=0;
void A()
{
	for (int i=1;i<=n;i++)
	{
		cnt[a[i]]=max(cnt[i],i);
	}
	for (int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}
}
void AAA()
{
	for (int k=1;k<=n;k++)
	{
		memset(f,0,sizeof f);
		memset(g,0,sizeof g);
		sz=0;
		for (int j=k;j<=n;j++)
		{
			if (f[a[j]])
			{
				for (int i=f[a[j]]+1;i<=sz;i++)
				{
					f[g[i]]=0;
					g[i]=0;
				}
			}
			else
			{
				g[++sz]=a[j];
				f[a[j]]=sz;
			}
		}
		for (int i=1;i<=n;i++)
		{
			cnt[g[i]]++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flagA=true;
	int cntB=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]!=a[i-1]&&i!=1) cntB++;
		if (a[i]<a[i-1]) flagA=false;
	}
	if (flagA) A();
	else AAA();
	return 0;
}



