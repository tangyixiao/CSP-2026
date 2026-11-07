#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],c[2][500005],d[500005];
bool b[500005];
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
		for(int k=1;k<=i-1;k++)
		{
			c[1][a[k]]=0;
			c[0][a[k]]=0;
			b[k]=1;
		}
		for(int k=i;k<=n;k++)
		{
			b[k]=0;
		}
		for(int j=i;j<=n;j++)
		{
			if(b[j]==0 && c[1][j]==0)
			{
				c[1][a[j]]=1;
				c[0][a[j]]=j;
			}
			else if(c[1][j]!=0&&b[j]==0)
			{
				int xx=c[0][a[j]];
				for(int k=xx;k<=j-1;k++)
				{
					c[1][a[k]]=0;
					c[0][a[k]]=0;
					b[k]=1;
				}
				c[1][a[j]]=1;
				c[0][a[j]]=j;
			}
		}
		for(int j=i;j<=n;j++)
		{
			if(a[j]<=m&&b[j]==0)
			{
				d[a[j]]++;
			}
		}
	 } 
	 for(int i=1;i<=m;i++)
	 {
	 	cout<<d[i]<<' ';
	 }
}