#include <bits/stdc++.h>
using namespace std;
int a[500005],n,m,c[300005],d[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int t=1;t<=n;t++)
	{
		for(int i=1;i<=n+t-1;i++)
		{
			d[i]=a[i+t-1];
			bool b=0;
			for(int j=1;j<i;j++)
			{
				if(d[j]==d[i])b=1;
				if(b)d[j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(d[i]!=0)c[d[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
}
