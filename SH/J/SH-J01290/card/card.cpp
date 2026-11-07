#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
queue<int>q;
deque<int>dq;
int a[500005];
int mn[500005];
int stg[500005];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		q.push(x);
	}
	for(int i=1;i<=n;i++)
	{
		memset(a,0,sizeof a);
		memset(stg,0,sizeof stg);
		for(int j=1;j<i;j++)
		{
			q.push(q.front());
			q.pop();
		}
		for(int j=n;j>=i;j--)
		{
			a[q.front()]+=1;
			if(a[q.front()]>=2)
			{
				a[q.front()]=1;
				while(dq.back()!=q.front())
				{
					dq.pop_back();
				} 
				dq.pop_back();
			}
			dq.push_back(q.front());
			q.push(q.front());
			q.pop();
		}
		while(!dq.empty())
		{
			stg[dq.front()]+=1;
			dq.pop_front();
		}
		for(int j=1;j<=m;j++)
		{
			if(stg[j]>0)
			{
				mn[j]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<mn[i]<<" ";
	} 
}
