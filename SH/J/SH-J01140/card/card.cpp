#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int vis[100005];
int ans[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool fg = true;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
		fg = false;
	}
	if(fg)
	{
		for(int i = n;i>=1;i--)
		{
			ans[a[i]] = max(i,ans[a[i]]);
		}
		for(int i = 1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	for(int i = 1;i<=n;i++)
	{
		stack<int> st;
		memset(vis,0,sizeof(vis));
		for(int j = i;j<=n;j++)
		{
			if(vis[a[j]]==1)
			{
				while(st.top()!=a[j])
				{
					vis[st.top()]--;
					st.pop();
				}
			}
			else
			{
				st.push(a[j]);
				vis[a[j]]++;
			}
		}
		while(st.size())
		{
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i = 1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	
	
	
	return 0;
}
