#include <bits/stdc++.h>
using namespace std;
long long n,m,a[10000000],b[10000000];
long long z[1000000],ma;
long long len;
void qk()
{
	for(int i=1;i<=n;i++)
	{
		z[i]=0;
	}
}
bool find(int x)
{
	for(int i=1;i<=n;i++)
	{
		if(z[i]==x)
		{
			return true;
		}
	}
	return false;
}
void play(int x)
{
	for(int i=1;i<=n;i++)
	{
		if(z[i]==x)
		{
			for(int j=i;j<=n;j++)
			{
				z[j]=0;
			}
			return;
		}
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		qk();
		len=1;
		for(int j=i;j<=n;j++)
		{
			if(find(a[j]))
			{
				play(a[j]);
				int tem=1;
				while(z[tem]!=0)
				{
					tem++;
				}
				len=tem;
				z[len]=a[j];
				if(j!=n)
				{
					len++;
				}
			}
			else
			{
				z[len]=a[j];
				if(j!=n)
				{
					len++;
				}
			}
		}
		for(int i=1;i<=len;i++)
		{
			b[z[i]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}