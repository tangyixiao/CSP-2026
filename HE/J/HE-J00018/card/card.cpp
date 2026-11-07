#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[100006];
ll vis[100005];
set<int> q1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		q1.clear();
		for(int j=i;j<=n;j++)
		{
			if(q1.count(a[j]))
			{
				q1.clear();
			}
			q1.insert(a[j]);
		}
		for(int j=1;j<=m;j++)
		{
			if(q1.count(j))
			{
				vis[j]++;
			}
		}
	}
	for(int i=1;i<m;i++)
	{
		cout<<vis[a[i]]<<" ";
	}
	cout<<n;
	return 0;
}
