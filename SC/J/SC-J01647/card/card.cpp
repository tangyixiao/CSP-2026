#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],l=0,c[500010];
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
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=l;k++)
			{
				if(b[k]==a[j])
				{
					l=k-1;
					break;
				}
			}
			b[++l]=a[j];
		}
		for(int j=1;j<=l;j++)
		{
			c[b[j]]++;
		}
		l=0;
	}
	for(int i=1;i<=m;i++)
	{	
		cout<<c[i]<<' ';
	}
	return 0;
}