#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
deque<int> q;
int vis[500010];
int ans[500010];
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			vis[j]=0;
		}
//		cout<<i<<"---:\n";
		for(int j=i;j<=n;j++)
		{
//			cout<<a[j]<<"--"<<vis[a[j]]<<" ";
			if(vis[a[j]]==1)
			{
				while(q.size()&&q.back()!=a[j])
				{
					q.pop_back();
				}
				cout<<a[j]<<" "<<q.back()<<"---\n";
				if(q.size())
				q.pop_back();
				q.push_back(a[j]);
			}
			else
			{
				vis[a[j]]=1;
				q.push_back(a[j]);
			}
		}
		while(q.size())
		{
			ans[q.front()]++;
			q.pop_front();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}