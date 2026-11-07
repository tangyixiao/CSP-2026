#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cnt[300005];
int sta[500005],top=0;
bool f[500005],vis[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int q=1;q<=n;q++)
	{
		memset(f,0,sizeof(f));
		memset(vis,0,sizeof(vis));
		top=0;
		for(int i=q;i<=n;i++)
		{
			if(f[a[i]]==0)
			{
				f[a[i]]=1;
				sta[++top]=a[i];
			}
			else
			{
				while(top>=0 && sta[top]!=a[i])
				{
					f[sta[top]]=0;
					top--;
				}
			}
		}
		for(int i=1;i<=top;i++)
		{
			vis[sta[i]]=1;
		}
		for(int i=1;i<=m;i++)
		{
			if(vis[i]) cnt[i]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
