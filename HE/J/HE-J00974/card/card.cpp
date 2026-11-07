#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[500005];
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
			c[j]=a[j];
			for(int k=i;k<j;k++)
			{
				if(c[k]==c[j])
				{
					for(int l=k;l<j;l++)
					{
						c[l]=0;
					}
				}
			}
		}
		
		for(int j=i;j<=n;j++)
		{
			if(c[j]) b[c[j]]++;
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
}
