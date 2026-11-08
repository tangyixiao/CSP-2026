#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],x[300005];
bool vis[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++)cin>>a[i];
	vis[a[n]] = 1;
	ans[a[n]] = 1;
	x[a[n]] = n;
	for(int i = n - 1;i >= 1;i--)
	{
		if(vis[a[i]])
		{
			for(int j = i + 1;j < x[a[i]];j++)vis[a[j]] = 0; 
			vis[x[a[i]]] = 1;
			for(int j = x[a[i]];j <= n;j++)
			{
				bool v[300005]; 
				if(vis[a[j]] && v[a[j]] != 1)
				{
					ans[a[j]]++;
				}
			}
		}
		else
		{
			vis[a[i]] = 1;
			int v[300005];
			for(int j = i;j <= n;j++)
			{
				if(vis[a[j]] && v[a[j]] != 1)
				{
					ans[a[j]]++;
					v[a[j]] = 1;
				}
			}
		}
		x[a[i]] = i;
	}
	for(int i = 1;i <= m;i++)cout<<ans[i]<<" ";
	return 0;
}
