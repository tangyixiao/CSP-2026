#include<iostream>
#include<cstring>
using namespace std;
int a[500005],b[500005],c[300005],d[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int x=0;
		memset(b,0,sizeof(b));
		memset(d,0,sizeof(d));
		for(int j=i;j<=n;j++)
		{
			x++;
			b[x]=a[j];
			if(d[a[j]]&&d[a[j]]<x&&b[d[a[j]]]==a[j])
			{
				x=d[a[j]];
			}
			else
				d[a[j]]=x;
		}
		for(int k=1;k<=x;k++)
			c[b[k]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<c[i]<<" ";
} 