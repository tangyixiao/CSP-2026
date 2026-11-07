#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005];
stack<int>tab;
map<int,int>vis;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			tab.push(a[i]);
			vis[a[i]]++;
			bool de=0;
			while(vis[a[i]]>=1)
			{
				vis[tab.top()]--;
				tab.pop();
				de=1;
			}
			if(de)
			{
				tab.push(a[i]);
				vis[a[i]]++;
			}
		}
		while(!tab.empty())
			tab.pop();
		for(int j=1;j<=m;j++)
		{
			if(vis[j]>0)
			{
				ans[j]++;
				vis[j]=0;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
