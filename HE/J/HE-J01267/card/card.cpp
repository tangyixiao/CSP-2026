#include <iostream>
using namespace std;
bool dp[50001][40001];
int a[500001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int x=0;x<n;x++)
	{
		cin>>a[x];
	}
	int o;
	for(int x=0;x<n;x++)
	{
		o=0;
		for(int y=n-x+1;y<n;y++)
		{
			if(a[x]==a[y])
			{
				o=1;
				for(int i=0;i<m;i++)
				{
					dp[n-x-1][i]=dp[n-y+1][i];
				}
				break;
			}
		}
		if(o==0)
		{
			for(int i=0;i<m;i++)
			{
				dp[n-x-1][i]=0;
			}
			for(int i=n-x-1;i<n;i++)
			{
				dp[n-x-1][a[i]-1]=1;
			}
		}
	}
	int sum=0;
	for(int x=0;x<m;x++)
	{
		sum=0;
		for(int y=0;y<n;y++)
		{
			if(dp[y][x])
			{
				sum++;
			}
		}
		cout<<sum<<" ";
	}
}
