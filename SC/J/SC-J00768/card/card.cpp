#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[300001],b[300001],sum[300001]={0},l=0,r=0;
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
		long long que[200001];l=0;r=0;
		for(int j=i;j<=n;j++)
		{
			for(int k=0;k<=r;k++)
			{
				if(que[k]==a[j])
				{
					for(int t=k;t<=r;t++)
					que[t]=-1;
				}
			}
			que[++r]=a[j];
		}
		for(int w=1;w<=r;w++)
		{
			if(que[w]!=-1)
			{
				sum[que[w]]++;
			}
		}
	 } 
	 for(int i=1;i<=m;i++)
	 cout<<sum[i]<<" ";
	return 0;
}