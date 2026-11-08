#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
using namespace std;
int n,m,a[1000005],b[600005],c[600005],d[1000005],top;
size_t i1,i2;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i1=1;i1<=n;i1++)
	{
		cin>>a[i1];
	}
	for(i1=1;i1<=n;i1++)
	{
		memset(b,0,sizeof(b));
		for(i2=i1;i2<=n;i2++)
		{
			if(b[a[i2]])
			{
				while(d[top]!=a[i2])
				{
					top--;
				}
			}
			else
			{
				top++;
				d[top]=a[i2];
				b[a[i2]]=1;
			}
		}
		while(top>0)
		{
			c[d[top]]++;
			top--;
		}
	}
	for(i1=1;i1<=m;i1++)
	{
		cout<<c[i1]<<" ";
	}
	return 0;
}
