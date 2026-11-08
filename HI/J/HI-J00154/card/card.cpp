#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=5e5+5;
int n,m,a[MAXN],cnt[MAXN],ton[MAXN],b[MAXN];
bool vis[MAXN],flag=true;
stack<int> s;
void solve()
{
	for(int i=1;i<=n;i++)
	{
		ton[a[i]]++;
		vis[i]=1;
	}
	for(int i=1;i<=m;i++)
	{
		b[i]=b[i-1]+ton[i];
	}
	for(int i=1;i<=m;i++)
	{
		if(a[i])
		{
			cout<<b[i]<<" ";
		}
	}
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])flag=false;
	}
	if(flag)
	{
		solve();
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		//cout<<"第"<<i<<"局"<<'\n'; 
		for(int j=i;j<=n;j++)
		{
			if(vis[a[j]])
			{
				//cout<<a[j]<<"有了"<<'\n';
				//cout<<s.top();
				while(s.top()!=a[j])
				{
					
					int x=s.top();
					s.pop();
					//cout<<"tanchu"<<x<<'\n';
					vis[x]=0;
				}
			}
			else
			{
				//cout<<a[j]<<"没有"<<'\n';
				vis[a[j]]=1;
				s.push(a[j]);
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(vis[i])
			{
				cnt[i]++;
				//cout<<i<<"++\n";
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
