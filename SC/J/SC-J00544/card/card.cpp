#include<bits/stdc++.h>
using namespace std;
int n,m,a[505000],b[505000],d[505000],x,c;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	x=n;
	while(n--)
	{
		c++;
		for(i=c;i<=x;i++)
		{
			b[a[i]+(c-1)*m]++;
			if(b[a[i]]+(c-1)*m!=1)
			{
				for(j=i-1+(c-1)*m;j>=1+(c-1)*m;j--)
				{
					b[j+(c-1)*m]--;
				}
			}
		}
		for(i=c+(c-1)*m;i<=m+(c-1)*m;i++)
		{
			d[i]=b[i+(c-1)*m]+b[i];
		}
	}
	for(i=1;i<=m;i++)
	{
		cout<<d[i]<<' ';
	}
	return 0;
}