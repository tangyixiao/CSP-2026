#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],vis[M],ans[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		stack <int> q;
		for(int j=i;j<=n;j++)
		{
			if(vis[a[j]]==0) q.push(a[j]),vis[a[j]]=1;
			else
			{
				while(!q.empty()&&q.top()!=a[j])
				{
					vis[q.top()]=0;
					q.pop();
				} 
			}
		} 
		stack <int> p=q;
		while(!p.empty())
		{
			ans[p.top()]++;
			vis[p.top()]=0;
			p.pop(); 
		} 
	} 
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}