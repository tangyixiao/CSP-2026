#include<bits/stdc++.h>
using namespace std;
int n,m,l[300005],a[500005];
queue <int> p,q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			int s=a[i];
			while(!q.empty()&&q.front()!=s)
			{
				p.push(q.front());
				q.pop();
			}
			p.push(s);
			while(!q.empty())
			{
				q.pop();
			}
			while(!p.empty())
			{
				q.push(p.front());
				p.pop();
			}
		}
		while(!q.empty())
		{
			l[q.front()]++;
			q.pop();
		}
		while(!p.empty())
		{
			p.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<l[i]<<" ";
	}
	return 0;
 } 
