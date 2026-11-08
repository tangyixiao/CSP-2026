#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MAXN=5e5+5;

ll n,m,ls[MAXN],ans[MAXN];
bool vis[MAXN];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		stack<ll> stk;
		for(int j=i;j<=n;j++)
		{
			if(vis[ls[j]]==0)
			{
				vis[ls[j]]=1;
				stk.push(ls[j]);
			}
			else
			{
				while(!stk.empty() && stk.top()!=ls[j])
				{
					stk.pop();
				}
			}
		}
		while(!stk.empty())
		{
			ans[stk.top()]++;
			stk.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" "; 
	}
	return 0;
}
