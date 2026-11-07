#include<bits/stdc++.h>
using namespace std;
int n,m;
stack<int>q;
int a[300005],cnt[300005];
bool f[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(f,false,sizeof(f));
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]]==false)
			{
				q.push(a[j]);
				f[a[j]]=true;
			}
			else
			{
				while(q.top()!=a[j])
				{
					f[q.top()]=false;
					q.pop();
				}
			}
		}
		while(q.size())
		{
			int t=q.top();
			cnt[t]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
} 