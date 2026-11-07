#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],shu[300009],b[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;	
	for(int i=1;i<=n;i++)cin>>a[i];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(shu[a[j]]==0)
			{
				shu[a[j]]=j;
			}
			else
			{
				for(int k=shu[a[j]];k<=j;k++)
				{
					shu[a[k]]=0;
				}
				shu[a[j]]=j; 
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(shu[j]!=0)
			b[j]++;
		}
		memset(shu,0,sizeof(shu));
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
