#include<bits/stdc++.h>
using namespace std;
int n,m,a[500020],b[300020],t[300020];
struct node
{
	int q=0,z=0;
}c[300020];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.ans","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{int cnt=0;
		for(int j=1;j<=m;j++)
		{
			c[a[j]].z=0;
			c[a[j]].q=0;
		}
		
		for(int j=i;j<=n;j++)
		{
			if(c[a[j]].z==1)
			{
				for(int o=b[c[a[j]].q+1];o<=n;o++)
				{
					b[o]=0;
				}
				cnt-=(cnt-c[a[j]].q+1);
			}
			c[a[j]].z=1;
			c[a[j]].q=++cnt;
			b[cnt]=a[j];
		}
		for(int j=1;j<=cnt;j++)
		{
			t[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<t[i]<<" ";
	}
	return 0;
}