#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],c[m+1]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x=1;
	for(int i=1;i<=n;i++)
	{
		int b[m+1]={0};
		for(int j=x;j<=n;j++)
		{
			b[a[j]]++;
		}
		for(int j=x;j<=n;j++)
		{
			if(b[a[j]]>1&&j>x)
			{
				for(int k=x;k<=j-1;k++)
				{
					b[a[k]]--;
				}
			}
		}
		for(int i=1;i<=m;i++)
		{
			c[i]+=b[i];
		}
		x++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<' ';
	}
	return 0;
}
