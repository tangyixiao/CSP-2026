#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool vis[500005];
int a[500005],b[500005],tong[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	bool t=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
			t=0;
	}
    if(t)
	{
		for(int i=1;i<=n;i++)
		{
			tong[a[i]]=max(tong[a[i]],n-i+1);
		}
		for(int i=1;i<=m;i++)
		{
			cout<<tong[i]<<" ";
		}
		return 0;
	}
	for(int t=1;t<=n;t++)
	{
		memset(vis,0,sizeof(vis));
		stack<int>s;
		for(int i=t;i<=n;i++)
		{
			if(!vis[a[i]])
			{
				vis[a[i]]=1;
				s.push(a[i]);
			}
			else
			{
				while(s.top()!=a[i])
				{
					vis[s.top()]=0;
					s.pop();
				}
			}

		}
		for(int i=1;i<=m;i++)
		{
			if(vis[i])
			{
				b[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}