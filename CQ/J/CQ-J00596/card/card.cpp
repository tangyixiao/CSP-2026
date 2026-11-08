#include<bits/stdc++.h>
#define N 500005
#define M 300005 
typedef long long ll;
using namespace std;
ll n,m,a[N],ans[M];
bool vis[M];
stack<ll> stk;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		memset(vis,0,sizeof(vis));
		
		for(int j=i;j<n;j++)
		{
			if(vis[a[j]]==0)stk.push(a[j]),vis[a[j]]=1;
			else
			{
				while(stk.top()!=a[j])
				{
					vis[stk.top()]=0;
					stk.pop();
				}
			}
		}while(!stk.empty())ans[stk.top()]++,stk.pop();
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
