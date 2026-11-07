#include<iostream>
using namespace std;

int a[500005];
int cnt[300005];


int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	bool g=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[1];
	}
	int x=1;
	for(int i=1;i<=n;i++)
	{
		int b[500005],d[500005];
		int x=1;
		bool c[300005];
		for(int j=i;j<=n;j++)
		{
			if(c[a[j]])
			{
				int e=d[a[j]];
				for(int k=d[a[j]];k<=x;k++)
				{
					d[b[k]]=0;
					c[b[k]]=0;
					b[k]=0;
					
				}
				x=e;
			}
			b[x]=a[j];
			d[a[j]]=x;
			c[a[j]]==1;
			x++;
		}
		for(int j=1;j<=m;j++)
		{
			if(c[i])cnt[i]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(g)cout<<' ';
		cout<<cnt[i];
		g=1;
	}
	return 0;
}
