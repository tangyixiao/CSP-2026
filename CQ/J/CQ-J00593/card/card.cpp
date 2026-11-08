#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000000],last2[1000000],v[1000000],vis[1000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i]; 
	if(n<=5000)
	{
		for(int i=1;i<=n;i++)
		{	for(int i=1;i<=m;i++) vis[i]=0;
			int t=0,b[7000];
			stack<int> q;
			for(int j=i;j<=n;j++)
			{
				if(vis[a[j]]) 
				{
					for(int k=1;k<=j-vis[a[j]];k++) 
					{
						if(q.size()) vis[q.top()]=0,q.pop();
					}
					vis[a[j]]=j;
					q.push(a[j]);
				}
				else q.push(a[j]),vis[a[j]]=j;
			}
			while(q.size()) v[q.top()]++,q.pop();
		}
		for(int i=1;i<=m;i++) cout<<v[i]<<' ';
	}
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
