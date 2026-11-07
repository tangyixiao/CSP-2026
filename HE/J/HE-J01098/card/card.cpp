#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],ans[500005];
bool vis[500005];
queue<int>q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
	for(int j=i;j<=n;j++)
	{
		if(vis[a[j]]==0)
		{		
		q.push(a[j]);
		vis[a[j]]=1;
		}
		else
		{
			vector<int>ct;
			while(!q.empty())
			{
				ct.push_back(q.front());
				q.pop();
			}
			for(int i=0;i<ct.size();i++)
			{
				if(ct[i]==a[j])	{
					for(int j=0;j<i;j++)
						q.push(ct[j]),vis[ct[j]]=1;
					for(int j=i;j<ct.size();j++)
						vis[ct[j]]=0;
				}
			}
			vis[a[j]]=1;
			q.push(a[j]);
		}
	}
	while(!q.empty())
	{
		
		int fr=q.front();
		q.pop();
		ans[fr]++;
	}
	memset(vis,0,sizeof(vis));
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
} 
