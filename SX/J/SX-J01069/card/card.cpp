#include<bits/stdc++.h>
#define maxn 500005
#define maxm 200005
using namespace std;
int n,m,a[maxn],ci[maxn],now[maxn],vis[maxn];
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
		int top=0;
		memset(vis,0,sizeof vis);
		memset(now,0,sizeof now);
		for(int j=i;j<=n;j++)
		{
			now[++top]=a[j];
			if(vis[a[j]]&&vis[a[j]]<top)
			{
				top=vis[a[j]];
			}
			else vis[a[j]]=top;

			//cout<<endl;
		}
		for(int k=1;k<=top;k++)
			{
				//cout<<now[k]<<' ';
				ci[now[k]]++;
			}
	}
	for(int i=1;i<=m;i++) cout<<ci[i]<<' ';

	return 0;
}