#include <bits/stdc++.h>
using namespace std;
int a[500005],b[300005];
bool vis[500005];
stack<int>c;
int n,m;
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
		
		for(int i=1;i<=m;i++)
		{
			vis[i]=0;
		}
		for(int j=i;j<=n;j++)
		{
			if(!vis[a[j]])
			{
				vis[a[j]]=1;
				c.push(a[j]);
			}
			else
			{
				while(c.top()!=a[j])
				{
					vis[c.top()]=0;
					c.pop();
				}
			}
		}
		while(!c.empty())
		{
			b[c.top()]++;
			c.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
 } 
