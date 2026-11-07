#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[200005];
bool c[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		c[i]=0;
		b[i]=a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			c[j]=0;
		}
		c[i]=1;
		for(int j=1;j<=m;j++)
		{
			int s=-1,w=0;
			for(int k=1;k<=n;k++)
			{
				int ch=b[i] & a[k];
				if( ch>=s && c[k]==0)
				{
					s=ch;
					w=k;
				}
			}
			c[w]=1;
			b[i]=s;
		}
		
	}
	
	int y=0;
	for(int i=1;i<=n;i++)
	{
		y=y<b[i] ? b[i] : y;
	}
	cout<<y;
}