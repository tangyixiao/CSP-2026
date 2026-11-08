#include<bits/stdc++.h>
using namespace std;

int n,m,cntj=0,cnto;
int a[1000009];
bool vis[1000009]; 
stack<int>q;
int cnt[1000009];
int r[1000009];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		r[a[i]]=i;
	}
	
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			if(vis[a[i]]==0)
			{
				q.push(a[i]);
				vis[a[i]]=true;
			}
			else
			{
				while(!q.empty())
				{
					int u=q.top();
					q.pop();
					vis[u]=false;
					if(u==a[i])break;
				}
				q.push(a[i]);
				vis[a[i]]=true;
			}
			
			if((int)q.size()==1)
			{
				int u=q.top();
				i=r[u];
				q.pop();
				vis[u]=0;
				cnt[u]++;
			}
		}
		while(!q.empty())
		{
			int u=q.top();
			cout<<u<<' ';
			cnt[u]++;
			vis[u]=0;
			q.pop();
		}		
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}

	return 0;
}
