#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],b[300005],c[300005],q[300005],zh[300005],cnt=0;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int o=1;o<=n;o++)
	{	
		int x;
		cin>>x;
		for(int i=o;i<=n;i++)
		{
			memset(a,0,sizeof(a));
			if(q[x]==0)
			{
				zh[++cnt]=x;
				q[x]=cnt;
				a[x]=1;
			}
			else
			{
				for(int j=q[x]+1;j<=cnt;j++)
				{
					a[zh[j]]=0;
					zh[j]=0;
				}
				cnt=q[x];
			}
			for(int j=1;j<=m;j++)
			{
				if(a[j]==1)
				{
					b[j]=1;
				}
			}
		}
		for(int i=1;i<=m;i++) c[i]+=b[i];
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	return 0;
}
