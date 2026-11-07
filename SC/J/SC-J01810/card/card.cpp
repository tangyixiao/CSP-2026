#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n, m;//纸牌数量&游戏场数， 
int a[N];
queue<int>q;
int vis[N];
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)//第i局游戏 
	{
		
		for(int j=i;j<=n;j++)//牌 
		{
			if(vis[a[j]]==0)
			{
				vis[a[j]]=1;
				q.push(a[j]);
			}
			else
			{
				while(q.front()!=a[j]) q.pop();
				vis[a[j]]=0;
			}
		}
		while(!q.empty())
		{
			int t=q.front();
			ans[t]++;
			q.pop();	
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i];
	}
	return 0;
}