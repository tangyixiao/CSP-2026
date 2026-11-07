#include<bits/stdc++.h>
using namespace std;
int c[600000];
int a[600000];
int b[600000];
int num;
int n,m;
int find(int p,int t)
{
	int ans=0;
	for(int i=t;i<=n;i++)
	{
		if(c[i]==t)
		{
			ans=i;
			return ans;
		}
	}
	return ans;
}
void dfs(int t)
{
	int num=1;
	for(int i=0;i<=n;i++)
	{
		c[i]=0;
	}
	for(int i=1;i<=t;i++)
	{
		int o=find(i,t);
		if(o==0)
		{
			c[num]=i;
			num++;
			
		}
		else
		{
			for(int i=n;i>=t;i--)
			{
				c[i]=0;
				num--;
			}
		}
	}
	int q=1;
	while(c[q]!=0)
	{
		b[c[q]]++;
		q++;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	c[0]=0;
	cin>>n>>m;//n是牌的数量与局数
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<' ';
	}
}