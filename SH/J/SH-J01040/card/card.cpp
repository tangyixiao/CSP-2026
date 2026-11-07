#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int vis[maxn];
struct node{
	int vis,id;
}cnt[maxn];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ff=0;
	for(int i=1;i<=n;i++)
	{
//		int t=n-i+1;
		stack<int>p;
		for(int j=i;j<=n;j++)
		{
			if(cnt[a[j]].vis==1)
			{
				int idi=cnt[a[i]].id;
				for(int k=1;k<=ff-idi+1;k++)
				{
					p.pop();
				}
			}
			p.push(a[j]);
			cnt[a[j]].vis=1;
			cnt[a[j]].id=i;
			ff++;
		}
		for(int j=1;j<=maxn;j++)
		{
			cnt[i].vis=0;
			cnt[i].id=0;
		}
		while(!p.empty())
		{
			auto v=p.top();
			p.pop();
			vis[v]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<vis[i]<<' ';
	 } 
}
