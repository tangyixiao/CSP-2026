#include <bits/stdc++.h>
using namespace std;
int n,m;
deque<int> de,q;
int a[500005],ans[300005];
bool vis[300005];
int main() 
{
	//CCF是人呀！
	//C**我cnm
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int sb=0;
		for(int j=i;j<=n;j++)
		{
			int idx=0;
			int cnt=de.size();
			bool ok=0;
			
			while(!de.empty())
			{
				int x=de.back();
				de.pop_back();
				q.push_back(x);
				if(x==a[j])
				{
					ok=1;
					idx=cnt;		
				}
				cnt--;
			}
			while(!q.empty())
			{
				int op=q.front();
				q.pop_front();
				de.push_back(op);
			}
			if(ok==1)
			{
				while(de.size()>=idx)
				{
					de.pop_back();
				}
			}
			de.push_back(a[j]);
		}
		if(i==n)
		{
			while(!de.empty())
			{
				int x=de.front();
				de.pop_front();
				q.push_back(x);
				vis[x]=1;
			}
			for(int k=1;k<=m;k++)
			{
				if(vis[k]==1)
				{
					ans[k]++;
				}
			}
		}
		else
		{
			while(!de.empty())
			{
				int x=de.front();
				de.pop_front();
				q.push_back(x);
				if(x<=m)
				{
					ans[x]++;
				}
			}
			while(!q.empty())
			{
				int op=q.front();
				q.pop_front();
				de.push_back(op);
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}   
//Trick||Treat!