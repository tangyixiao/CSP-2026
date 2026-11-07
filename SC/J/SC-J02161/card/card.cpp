#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[1000005],b[1000005],d[1000005];
void dfs(int k)
{
	if(k==n+1)
	{
		for(int i=1;i<=n;i++)
		{
			if(d[i]!=0)
			{
				b[d[i]]++;
			}
			d[i]=0;
		}
		return ;
	}
	int o=k;
	for(int i=1;i<=n;i++)
	{
		if(d[i]==a[k])
		{
			o=i;	
		}
	}
	for(int i=o;i<=n;i++)
	{
		d[i]=0;
	}
		d[o]=a[k];
		dfs(k+1);
}
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
		dfs(i);
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
}