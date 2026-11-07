#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;
const int inf=2e9+5;

int n,m;

int mx=-1;
int ans[N];
int a[N];
bool vis[N];

queue<int>que,tmp;

int solve(int l)
{
//	cout<<111<<'\n';
	memset(vis,0,sizeof(vis));
	while(!que.empty())
	{
		que.pop();
	}
	for(int i=l;i<=n;i++)
	{
		if(vis[a[i]])
		{
			while(que.front()!=a[i])
			{
				tmp.push(que.front());
				que.pop();
			}	
			while(!que.empty())
			{
				que.pop();
				vis[que.front()]=0;
			}
			while(!tmp.empty())
			{
				que.push(tmp.front());
				tmp.pop();
			}
		}
		que.push(a[i]);
		vis[a[i]]=1;
	}
	while(!que.empty())
	{
//		cout<<que.front()<<' ';
		ans[que.front()]+=1;
		que.pop();
	}
//	cout<<'\n';
}

signed main()
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
		solve(i);
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

10 3 3



*/
