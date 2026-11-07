#include<bits/stdc++.h>
using namespace std;
int sum[300005],ans[300005],a[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(sum,0,sizeof(sum));
		for(int j=i;j<=n;j++)
		{
			if(sum[a[j]]==0)
				sum[a[j]]++;
			else
			{
				memset(sum,0,sizeof(sum));
				sum[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(sum[j]>0)
				ans[j]++;
		}
	}
	for(int j=1;j<=m;j++)
	{
		cout<<ans[j]<<" ";
	}
	return 0;
} 
